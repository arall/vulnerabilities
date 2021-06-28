#include <botan/tls_client.h>
#include <botan/tls_callbacks.h>
#include <botan/tls_session_manager.h>
#include <botan/tls_policy.h>
#include <botan/auto_rng.h>
#include <botan/certstor.h>
#include <botan/certstor_system.h>

class Callbacks : public Botan::TLS::Callbacks
{
// ...

virtual void tls_verify_cert_chain(
          const std::vector<Botan::X509_Certificate> &cert_chain,
          const std::vector<std::shared_ptr<const Botan::OCSP::Response>> &ocsp_responses,
          const std::vector<Botan::Certificate_Store *> &trusted_roots,
          Botan::Usage_Type usage,
          const std::string &hostname,
          const Botan::TLS::Policy &policy) override {} // Noncompliant (secondary location), tls_verify_cert_chain never throws. Always accept server certificate and doesn't verify hostname

};

class Client_Credentials : public Botan::Credentials_Manager
{
// ...
};


Callbacks callbacks;
Botan::AutoSeeded_RNG rng;
Botan::TLS::Session_Manager_In_Memory session_mgr(rng);
Client_Credentials creds;
Botan::TLS::Strict_Policy policy;

// open the tls connection
Botan::TLS::Client client(callbacks, session_mgr, creds, policy, rng,
                          Botan::TLS::Server_Information("example.com", 443),
                          Botan::TLS::Protocol_Version::TLS_V12); // Noncompliant; uses an implementation of Botan::TLS::Callbacks that doesn't validate server certificate
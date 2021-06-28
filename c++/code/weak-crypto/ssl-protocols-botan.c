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
};

class Client_Credentials : public Botan::Credentials_Manager
{
// ...
};

Callbacks callbacks;
Botan::AutoSeeded_RNG rng;
Botan::TLS::Session_Manager_In_Memory session_mgr(rng);
Client_Credentials creds;
Botan::TLS::Policy policy; // Noncompliant: Default Policy has TLSv1.0 and DLTv1.0 as minimal versions

// open the tls connection
Botan::TLS::Client client(callbacks, session_mgr, creds, policy, rng,
                          Botan::TLS::Server_Information("example.com", 443),
                          Botan::TLS::Protocol_Version::TLS_V12);
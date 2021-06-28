ActiveMQConnectionFactory factory = new ActiveMQConnectionFactory("tcp://localhost:61616");
factory.setTrustAllPackages(true); // Noncompliant

ActiveMQConnectionFactory factory = new ActiveMQConnectionFactory("tcp://localhost:61616");
// no call to factory.setTrustedPackages(...);
// file: ejb-interceptors.xml
<assembly-descriptor>
 <interceptor-binding> <!-- should be declared in ejb-jar.xml -->
      <ejb-name>*</ejb-name>
      <interceptor-class>com.myco.ImportantInterceptor</interceptor-class> <!-- Noncompliant; will NOT be treated as default -->
   </interceptor-binding>
</assembly-descriptor>
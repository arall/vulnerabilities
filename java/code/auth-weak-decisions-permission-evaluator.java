public class MyPermissionEvaluator implements PermissionEvaluator {
    @Override
    public boolean hasPermission(Authentication authentication, Object targetDomainObject, Object permission) {
        //Getting subject
        Object user = authentication.getPrincipal();

        if(user.getRole().equals(permission)) {
              return true; // Noncompliant
        }

        return true;  // Noncompliant
    }
}
public class WeakNightVoter implements AccessDecisionVoter {
    @Override
    public int vote(Authentication authentication, Object object, Collection collection) {  // Noncompliant

      Calendar calendar = Calendar.getInstance();

      int currentHour = calendar.get(Calendar.HOUR_OF_DAY);

      if(currentHour >= 8 && currentHour <= 19) {
        return ACCESS_GRANTED; // Noncompliant
      }

      // when users connect during the night, do not make decision
      return ACCESS_ABSTAIN; // Noncompliant
    }
}
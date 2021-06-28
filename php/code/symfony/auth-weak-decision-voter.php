<?php

class NoncompliantVoter extends Voter
{
    protected function supports(string $attribute, $subject)
    {
        return true;
    }

    protected function voteOnAttribute(string $attribute, $subject, TokenInterface $token)
    {
        return true; // Noncompliant
    }
}
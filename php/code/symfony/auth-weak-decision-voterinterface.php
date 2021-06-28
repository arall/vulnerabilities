<?php

class NoncompliantVoterInterface implements VoterInterface
{
    public function vote(TokenInterface $token, $subject, array $attributes)
    {
        return self::ACCESS_GRANTED; // Noncompliant
    }
}
<?php

class NoncompliantGuard
{
    public function boot()
    {
        Gate::define('xxx', function ($user) {
            return true; // Noncompliant
        });

        Gate::define('xxx', function ($user) {
            return Response::allow(); // Noncompliant
        });
    }
}
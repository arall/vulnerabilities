<?php

namespace Symfony\Component\DependencyInjection\Loader\Configurator;

return static function (ContainerConfigurator $container) {
    $container->extension('security', [
        'session_fixation_strategy' => 'none', // Noncompliant
    ]);
};
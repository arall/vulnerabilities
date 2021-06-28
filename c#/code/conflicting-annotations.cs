using System;
using System.Security;

namespace MyLibrary
{

    [SecurityCritical]
    public class Foo
    {
        [SecuritySafeCritical] // Noncompliant
        public void Bar()
        {
        }
    }
}
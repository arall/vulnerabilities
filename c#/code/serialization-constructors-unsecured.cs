using System;
using System.IO;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters.Binary;
using System.Security;
using System.Security.Permissions;

[assembly: AllowPartiallyTrustedCallersAttribute()]
namespace MyLibrary
{
    [Serializable]
    public class Foo : ISerializable
    {
        private int n;

        [FileIOPermissionAttribute(SecurityAction.Demand, Unrestricted = true)]
        public Foo()
        {
           n = -1;
        }

        protected Foo(SerializationInfo info, StreamingContext context) // Noncompliant
        {
           n = (int)info.GetValue("n", typeof(int));
        }

        void ISerializable.GetObjectData(SerializationInfo info, StreamingContext context)
        {
           info.AddValue("n", n);
        }
    }
}
public class XmlSerializerTestCase : Controller
{
   public ActionResult unsecuredeserialization(string typeName)
  {
     // ....
     ExpectedType obj = null;
     Type t = Type.GetType(typeName); // typeName is user-controlled
     XmlSerializer serializer = new XmlSerializer(t); // Noncompliant
     obj = (ExpectedType) serializer.Deserialize(fs);
     // ....
   }
}
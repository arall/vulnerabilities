using System.IO;
using System.Net;
using Microsoft.AspNetCore.Mvc;

namespace WebApplicationDotNetCore.Controllers
{
    public class RSPEC5144SSRFNoncompliantController : Controller
    {
        public IActionResult Index()
        {
            return View();
        }

        public IActionResult ReadContentOfURL(string url)
        {
            HttpWebRequest request = (HttpWebRequest)WebRequest.Create(url); // Noncompliant

            HttpWebResponse response = (HttpWebResponse)request.GetResponse();
            Stream dataStream = response.GetResponseStream();
            StreamReader reader = new StreamReader(dataStream);
            string responseFromServer = reader.ReadToEnd();

            reader.Close();
            dataStream.Close();
            response.Close();
            return Content(responseFromServer);
        }
    }
}
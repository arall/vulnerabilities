using System.Diagnostics;
using Microsoft.AspNetCore.Mvc;

namespace WebApplicationDotNetCore.Controllers
{
    public class RSPEC2076OSCommandInjectionNoncompliantController : Controller
    {
        public IActionResult Index()
        {
            return View();
        }

        public IActionResult Run(string binary)
        {
            // If the value "/sbin/shutdown" is passed as binary and the web server is running as root,
            // then the machine running the web server will be shut down and become unavailable for future requests

            Process p = new Process();
            p.StartInfo.FileName = binary; // Noncompliant
            p.StartInfo.RedirectStandardOutput = true;
            p.Start();
            string output = p.StandardOutput.ReadToEnd();
            p.Dispose();

            return View();
        }
    }
}
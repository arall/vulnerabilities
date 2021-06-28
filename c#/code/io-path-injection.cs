using System;
using Microsoft.AspNetCore.Mvc;

namespace WebApplicationDotNetCore.Controllers
{
    public class RSPEC2083IOInjectionNoncompliantController : Controller
    {
        public IActionResult Index()
        {
            return View();
        }

        public IActionResult DeleteFile(string fileName)
        {
            System.IO.File.Delete(fileName); // Noncompliant

            return Content("File " + fileName + " deleted");
        }
    }
}
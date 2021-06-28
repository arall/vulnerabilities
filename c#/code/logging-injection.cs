using System;
using Microsoft.AspNetCore.Mvc;


namespace WebApplicationDotNetCore.Controllers
{
    public class RSPEC5145LogInjectionLog4NetNoncompliantController : Controller
    {
        private static readonly log4net.ILog _logger = log4net.LogManager.GetLogger(System.Reflection.MethodBase.GetCurrentMethod().DeclaringType);

        public IActionResult Index()
        {
            return View();
        }

        public void LogSomething(string id)
        {
            if (id != null)
            {
                _logger.Info("ID: " + id);
            }
        }
    }
}
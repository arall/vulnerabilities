public class FooBarController : Controller
{
    [HttpPost] // Noncompliant
    [ValidateInput(false)]
    public ActionResult Purchase(string input)
    {
        return Foo(input);
    }

    [HttpPost] // Noncompliant
    public ActionResult PurchaseSomethingElse(string input)
    {
        return Foo(input);
    }
}
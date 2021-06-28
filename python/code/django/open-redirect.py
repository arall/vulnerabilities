from django.http import HttpResponseRedirect

def move(request):
    url = request.GET.get("next", "/")
    return HttpResponseRedirect(url) # Noncompliant
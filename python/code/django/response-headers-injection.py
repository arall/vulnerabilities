import django.http

def route(request):
    content_type = request.GET.get("Content-Type")
    response = django.http.HttpResponse()
    response.__setitem__('Content-Type', content_type) # Noncompliant
    return response
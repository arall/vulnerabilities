app.get('/search', (req, res) => {
    const results = db.search(req.query.product);
    if (results.length === 0) {
        return res.send('<p>No results found for "' + req.query.product + '"</p>');
    }
});
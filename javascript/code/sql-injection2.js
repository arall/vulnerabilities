const db = require('./db');

app.get('/products', (req, res) => {
    db.query('SELECT * FROM products WHERE id = ' + req.query.id);
    .then((product) => {
        res.send(product);
    })
});
import http from 'http';

http.createServer(function,(req,res){
    res.write('hello');
    res.end();
}).listen(8081);
/*
function printnum(from,to)
{
    let d= from;
    let ok = setInterval()
}

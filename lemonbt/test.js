/*
*  test lemonbt;
*/

var lemonbt = require('./build/Debug/lemonbt.node');
var util = require('util');
console.log(lemonbt.init()); // 'world'

var helloNode = function()
{

}
//util.inherits(helloNode,lemonbt.node());
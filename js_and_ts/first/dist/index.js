"use strict";
// Basic Types
let id = 3;
let company = 'Rohit';
let isPublished = true;
let x = 'Hello';
x = 7;
let ids = [1, 2, 3, 4];
let arr = [1, false, 'Hello'];
//Tuple
let person = [1, 'Rohit', true];
// Tuple Array
let employee;
employee = [
    [1, "A"],
    [2, "B"],
    [3, "C"],
];
let pid = 22;
pid = "Dfsa";
// enum (named constants)
var Directions;
(function (Directions) {
    Directions[Directions["Up"] = 1] = "Up";
    Directions[Directions["Down"] = 2] = "Down";
    Directions[Directions["Left"] = 3] = "Left";
    Directions[Directions["Right"] = 4] = "Right";
})(Directions || (Directions = {}));
var Directions2;
(function (Directions2) {
    Directions2["Up"] = "Up";
    Directions2["Down"] = "Down";
    Directions2["Left"] = "Left";
    Directions2["Right"] = "Right";
})(Directions2 || (Directions2 = {}));
console.log(isPublished);
console.log(x);
console.log(arr);
console.log(person);
console.log(employee);
console.log(pid);
console.log(Directions.Down);
console.log(Directions2.Left);

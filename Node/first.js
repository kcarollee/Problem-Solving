console.log('hello');
const string1 = 'hello';
const string2 = 'bye';

const statement1 = `${string1} is the first string`;
const statement2 = `${string2} is the second string`;

console.log(statement1);
console.log(statement2);
 

// Declaring variables with let

let var1 = 'apple';
console.log('var1 =',  var1);

var1 = 'changed';
console.log('var1 changed = ' + var1);

// Constants can't be modified

const string3 = 'string 3';
const string4 = 'string 4';

const number1 = 10;
const number2 = 20;

console.log('String 3 and string 4: %s', string3 + string4);
console.log('Number 1 + number 2 : %d', number1 + number2);
console.log('\n');
console.log('String3 + number2 : %s', string3 + number2);

// isNaN(): is not a number
const isNaN123 = isNaN(123); // false
const isNaNMinus123 = isNaN(-123); // false
const isNaN234 = isNaN('234'); // false
const isNaNHello = isNaN('Hello'); // true

console.log(isNaN123);
console.log(isNaNMinus123);
console.log(isNaN234);
console.log(isNaNHello);
console.log(isNaN('123'));
console.log(isNaN(123));


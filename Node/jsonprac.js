const user = {};

user.name = 'karl';
user.age = 23;

console.log(user);

const user2 = {name : 'kate', age : 24};
console.log(user2);

console.log('user: ', user);
console.log('user name: ', user.name);
console.log('user age: ', user.age);
user.job = 'student';
user.nation = 'korea';

console.log('user job: ', user.job);
console.log(user);

const memberName = 'age';
console.log(user[memberName]);


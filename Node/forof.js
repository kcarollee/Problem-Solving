const userList = [
    {name : 'first', age : 31, score : 85},
    {name : 'second', age : 23, score : 95},
];

for (const user of userList){
    console.log('user: ', user);
}
console.log('--------------------');

userList.forEach(function(user){
    console.log(user);
});

console.log('--------------------');

userList.forEach(user => console.log(user));



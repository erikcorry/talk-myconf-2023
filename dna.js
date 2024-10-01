var re = /[cga]tatcccgac|[act]gcttacg/;

for (var i = 0; i < 1000000; i++) {
  re.test('cgcttacg');
}

void
revwords(CharStack& S)
{
  char ch;

  while(cin.get(ch)) {
    switch (ch) {
    case ' ':
    case '\t':
    case '\n':
      while (!S.isEmpty())
        cout << S.pop();
      cout << ch;
      break;

    default:
      S.push(ch);
      break;
    }
  }
}

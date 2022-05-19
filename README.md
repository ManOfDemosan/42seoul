# libft
이 라이브러리의 함수들은 크게 세 가지 파트로 나눌 수 있다.

1. C 표준 라이브러리인 Libc의 함수들.
2. 문자열을 다루는 유용한 함수들.
3. 리스트를 다루는 유용한 함수들.

# get_next_line
주어진 fd(file discriptor) 의 개행까지의 한 라인을 String 으로 반환하는 함수 구현.
다수의 fd 가 무작위 순서로 호출되는 경우에도 동작하도록 구현

# ft_printf
systemcall 인 write 만을 사용하여 C 언어의 printf 구현하는 프로젝트

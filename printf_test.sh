PRINTF_PATH="../"
LIB="libftprintf.a"
PRINTF_FLAGS="d i c s p x XX pct"

RED_C='\033[0;31m'
GREEN_C='\033[0;32m'
YELLOW_C='\033[1;33m'
WHITE_C='\033[0m'

rm a.out outputs/*_out includes/*
make -C $PRINTF_PATH
cp ${PRINTF_PATH}*.h includes/
cp tests/printf_tester.h includes/
clear

for t in ${PRINTF_FLAGS}; do
	gcc -Wall -Wextra -Werror -Iincludes/ ${PRINTF_PATH}${LIB} tests/ft_printf_${t}_test.c tests/${t}_test_ft.c tests/${t}_test_pt.c
	./a.out
	echo
	echo
done

echo -e ${YELLOW_C}
echo "////||_-_-_-_-_//RESULTS\\\\_-_-_-_-_||\\\\\\\\"
echo

for f in $PRINTF_FLAGS; do
	gcc -w -Iincludes/ tests/${f}_test_ft_outputer.c tests/${f}_test_ft.c ../libftprintf.a
	./a.out > outputs/${f}_ft_out
	gcc -w -Iincludes/ tests/${f}_test_pt_outputer.c tests/${f}_test_pt.c ../libftprintf.a
	./a.out > outputs/${f}_pt_out
	if diff -q outputs/${f}_ft_out outputs/${f}_pt_out
	then
		echo -e "${f} tests ${GREEN_C}SUCCESS${YELLOW_C}"
	else
		echo -e "${f} tests ${RED_C}FAILURE${YELLOW_C}"
	fi
done

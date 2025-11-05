int romanToInt(char* s) {
    int i = 0;
    char symbols[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int values[] = {1, 5, 10, 50, 100, 500, 1000};

    int sum = 0;
    int addval = 0;
    while (s[i] != '\0') {
        for (int n = 0; n <= 6; n++) {
            addval = 0;
            if (s[i] == symbols[n]) {
                addval = values[n];
            }

            if ( s[i] == 'I' || s[i] == 'X' || s[i] == 'C' ) {
                if (s[i] == 'I') {
                    if (s[i+1] == 'V' || s[i+1] == 'X') {
                        addval *= -1;
                    }
                } else if (s[i] == 'X') {
                    if (s[i+1] == 'L' || s[i+1] == 'C') {
                        addval *= -1;
                    }
                } else if (s[i] == 'C') {
                    if (s[i+1] == 'D' || s[i+1] == 'M') {
                        addval *= -1;
                    }
                }
            }
            printf("%d \n", addval);
            sum += addval;
        }
        i++;
    }
    return sum;
}   
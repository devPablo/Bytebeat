int main() {
        for (int t=0;;t++) {
                putchar(t*((42&t>>10)%18)|((t&6)%14)>>(t/3*(2&12^3>>(t>>4)))|(t>>12*(12&t>>7)+(t>>2&3^4)));
        }
}
#include <string>
#include <vector>

void divisor_count() {
    int n = 36;
    int count = 0;
    for (int d = 1; d <= n; ++d) {
        if (n % d == 0) count += 1;
    }
    (void)count;
}

void triangular_number() {
    int n = 12;
    int tri = n * (n + 1) / 2;
    (void)tri;
}

void count_spaces() {
    std::string text = "a b  c   d";
    int spaces = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') spaces += 1;
    }
    (void)spaces;
}

void is_prime() {
    int n = 97;
    bool prime = (n > 1);
    for (int d = 2; d * d <= n; ++d) {
        if (n % d == 0) { prime = false; break; }
    }
    (void)prime;
}

extern "C" int still_compass();
extern "C" void frost_vale();
extern "C" void radiant_haven();
extern "C" void silver_orbit();
extern "C" void sable_summit();

int main() {
    divisor_count();
    triangular_number();
    count_spaces();
    is_prime();
    frost_vale();
    radiant_haven();
    silver_orbit();
    sable_summit();
    return still_compass();
}

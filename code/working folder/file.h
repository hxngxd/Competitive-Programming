struct Keys{
    const int right, left, down, up, space;
    Keys() = default;
    Keys(const int right, const int left, const int down, const int up, const int space) : right(right), left(left), down(down), up(up), space(space) {}
};

extern Keys leftKeys;
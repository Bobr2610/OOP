https://www.youtube.com/watch?v=_BWU5mWqVA4
- Тут можно вспомнить про ОСНОВНЫЕ принцыпы работы с СМаке (ночное ОСМР видео)

http://youtube.com/watch?v=16FI1-d2P4E
- Как юзать Unit-тесты Google Test

https://www.youtube.com/watch?v=Lp1ifh9TuFI&t=1041s
- Это все сразу

Если нужно добавить проверку то
windows.h И UTF8

#include <vector>
#include <algorithm>

const std::vector<std::string> valid_days = {"Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота", "Воскресенье"};

if (std::find(valid_days.begin(), valid_days.end(), d) == valid_days.end()) {
    std::cerr << "Learn days!" << std::endl;
    return 1;
}
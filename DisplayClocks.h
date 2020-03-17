//
// Created by Jef DeWitt on 3/16/20.
//

#ifndef CHADATECH_DISPLAYCLOCKS_H
#define CHADATECH_DISPLAYCLOCKS_H


class DisplayClocks {
public:
    DisplayClocks();

    void GetCurrentTime();

    void AddOneHour();

    void AddOneMinute();

    void AddOneSecond();

    void FormatClocks(tm *now, char *buffer);
};


#endif //CHADATECH_DISPLAYCLOCKS_H

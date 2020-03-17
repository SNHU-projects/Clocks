//
// Created by Jef DeWitt on 3/16/20.
//

#ifndef CHADATECH_DISPLAYCLOCKS_H
#define CHADATECH_DISPLAYCLOCKS_H


class DisplayClocks {
public:
    DisplayClocks();

    void DisplayCurrentTime(tm *pTm);

    void AddOneHour(tm *currentTime);

    void AddOneMinute(tm *currentTime);

    void AddOneSecond(tm *currentTime);

    void FormatClocks(tm *now);
};


#endif //CHADATECH_DISPLAYCLOCKS_H

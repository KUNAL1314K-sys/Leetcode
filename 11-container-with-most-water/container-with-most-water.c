int maxArea(int* height, int heightSize) {
    int start = 0;
    int end = heightSize - 1;
    int maxarea = 0;
    int area = 0;

    while (start < end) {
        if (*(height + start) < *(height + end)) {
            area = (*(height + start)) * (end - start);
        } else {
            area = (*(height + end)) * (end - start);
        }

        if (*(height + start) < *(height + end)) {
            start++;
        } else {
            end--;
        }

        if (area > maxarea) {
            maxarea = area;
        }
    }
    return maxarea;
}
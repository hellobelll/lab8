char findGrade(int grade) {
    if(grade >= 90) {
        return 'A';
    } else if(grade >= 75) {
        return 'B';
    } else if(grade >= 60) {
        return 'C';
    } else if(grade >= 45) {
        return 'D';
    } else {
        return 'F';
    }

}
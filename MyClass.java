
import java.util.*;

public class MyClass {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        course arr[] = new course[4];
        for (int i = 0; i < 4; i++) {
            int id = sc.nextInt();
            sc.nextLine();
            String name = sc.nextLine();
            String admin = sc.nextLine();
            int quiz = sc.nextInt();
            sc.nextLine();
            int handson = sc.nextInt();
            sc.nextLine();
            arr[i] = new course(id, name, admin, quiz, handson);
        }
        String admin = sc.nextLine();
        int hand = sc.nextInt();
        int ans1 = avgofcourse(arr, admin);
        course ans[] = sortin(arr, hand);
        if (ans1 != 0) {
            System.out.println(ans1);
        } else {
            System.out.println("No Course Found");
        }
        if (ans != null) {
            for (int i = 0; i < ans.length; i++) {
                System.out.println(ans[i].getName());
            }
        } else {
            System.out.println("No Cout found with mention attribute");
        }
    }

    static int avgofcourse(course arr[], String a) {
        int sum = 0, count = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i].getAdmin().equalsIgnoreCase(a)) {
                sum += arr[i].getQuiz();
                count++;
            }
        }
        if (count > 0) {
            int av = sum / count;
            return av;
        }
        return 0;
    }

    static course[] sortin(course[] arr, int ha) {
        course[] res = new course[0];
        for (int i = 0; i < arr.length; i++) {
            if (arr[i].getHandson() < ha) {
                res = Arrays.copyOf(res, res.length + 1);
                res[res.length - 1] = arr[i];
            }

        }
        course val;
        for (int i = 0; i < res.length; i++) {
            for (int j = i + 1; j < res.length; j++) {
                if (res[i].getHandson() > res[j].getHandson()) {
                    val = res[i];
                    res[i] = res[j];
                    res[j] = val;
                }
            }
        }
        if (res.length > 0) {
            return res;
        }
        return null;
    }

}

class course {

    private int courseid;
    private String name;
    private String admin;
    private int quiz;
    private int handson;

    public course(int courseid, String name, String admin, int quiz, int handson) {
        this.courseid = courseid;
        this.name = name;
        this.admin = admin;
        this.quiz = quiz;
        this.handson = handson;
    }

    public int getCourseid() {
        return courseid;
    }

    public void setCourseid(int courseid) {
        this.courseid = courseid;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getAdmin() {
        return admin;
    }

    public void setAdmin(String admin) {
        this.admin = admin;
    }

    public int getQuiz() {
        return quiz;
    }

    public void setQuiz(int quiz) {
        this.quiz = quiz;
    }

    public int getHandson() {
        return handson;
    }

    public void setHandson(int handson) {
        this.handson = handson;
    }

}

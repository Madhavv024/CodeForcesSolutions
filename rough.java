import java.util.*;
public class rough {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        Cricker[] arr = new Cricker[size];
        for (int i = 0; i < size; i++) {
            int a = sc.nextInt();
            sc.nextLine();
            int b = sc.nextInt();
            sc.nextLine();
            int c = sc.nextInt();
            sc.nextLine();
            String d = sc.nextLine();
            String e = sc.nextLine();
            arr[i] = new Cricker(a, b, c, d, e);
        }
        int id = sc.nextInt();
        Cricker player1 = findCricketerWithMinimumMatchesPlayed(arr);
        System.out.println(player1.getId());
//        System.out.println(player1.getMathesPlayed());

        Cricker player2 = searchCricketerByld(arr, id);
        if (player2 == null) {
            System.out.println("No such Cricketer");
        } else {
            System.out.println(player2.getId());
            System.out.println(player2.getName());
        }
    }

    static Cricker searchCricketerByld(Cricker[] arr, int id) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i].getId() == id) {
                return arr[i];
            }
        }
        return null;
    }

    static Cricker findCricketerWithMinimumMatchesPlayed(Cricker[] arr) {
        int minimum = arr[0].getMathesPlayed();
        for (int i = 1; i < arr.length; i++) {
            if (arr[i].getMathesPlayed() <= minimum) {
                minimum = arr[i].getMathesPlayed();
            }

        }

        for (int i = 0; i < arr.length; i++) {
            if (arr[i].getMathesPlayed() == minimum) {
                return arr[i];
            }
        }
        return null;
    }
}
     class Cricker {
        private int id;
        private int mathesPlayed;
        private int runsScored;
        private String name;
        private String team;

        public Cricker(int id, int mathesPlayed, int runsScored, String name, String team) {
            this.id = id;
            this.mathesPlayed = mathesPlayed;
            this.runsScored = runsScored;
            this.name = name;
            this.team = team;
        }

        public int getId() {
            return id;
        }

        public void setId(int id) {
            this.id = id;
        }

        public int getMathesPlayed() {
            return mathesPlayed;
        }

        public void setMathesPlayed(int mathesPlayed) {
            this.mathesPlayed = mathesPlayed;
        }

        public int getRunsScored() {
            return runsScored;
        }

        public void setRunsScored(int runsScored) {
            this.runsScored = runsScored;
        }

        public String getName() {
            return name;
        }

        public void setName(String name) {
            this.name = name;
        }

        public String getTeam() {
            return team;
        }

        public void setTeam(String team) {
            this.team = team;
        }


}
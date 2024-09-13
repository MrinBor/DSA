class CabServiceProvider {
    private String serviceName;
    private int totalFare;

    public CabServiceProvider(String serviceName, int totalFare) {
        this.serviceName = serviceName;
        this.totalFare = totalFare;
    }

    // Method to calculate the reward price based on the driver's average rating
    public double calculateRewardPrice(Driver driver) {
        double bonus = 0.0;
        float rating = driver.getAverageRating();

        if (rating >= 4.5) {
            bonus = 0.10 * totalFare;
        } else if (rating >= 4.0 && rating < 4.5) {
            bonus = 0.05 * totalFare;
        }

        return bonus;
    }
}

class Tester {
    public static void main(String args[]) {
        CabServiceProvider cabServiceProvider1 = new CabServiceProvider("Halo", 50);

        Driver driver1 = new Driver("Luke", 4.8f);
        Driver driver2 = new Driver("Mark", 4.2f);
        Driver driver3 = new Driver("David", 3.9f);

        Driver[] driversList = { driver1, driver2, driver3 };
        for (Driver driver : driversList) {
            System.out.println("Driver Name: " + driver.getDriverName());
            double bonus = cabServiceProvider1.calculateRewardPrice(driver);
            if (bonus > 0)
                System.out.println("Bonus: $" + bonus + "\n");
            else
                System.out.println("Sorry, bonus is not available!");
        }

        // Additional tests
        CabServiceProvider cabServiceProvider2 = new CabServiceProvider("Lyft", 100);
        Driver driver4 = new Driver("John", 4.7f);
        Driver driver5 = new Driver("Paul", 3.5f);

        Driver[] additionalDrivers = { driver4, driver5 };
        for (Driver driver : additionalDrivers) {
            System.out.println("Driver Name: " + driver.getDriverName());
            double bonus = cabServiceProvider2.calculateRewardPrice(driver);
            if (bonus > 0)
                System.out.println("Bonus: $" + bonus + "\n");
            else
                System.out.println("Sorry, bonus is not available!");
        }
    }
}

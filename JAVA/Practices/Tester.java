class Bill {
    private static int counter = 0;
    private String billid;
    private String paymentMode;

    public Bill(String paymentMode) {
        this.paymentMode = paymentMode;
        counter++;
    }

    public String getbillid()
    {
        return billid;
    }

    public void setBillId(String billid)
    {
        this.billid = billid;
    }

    public String getPaymentMode()
    {
        return paymentMode;
    }

    public void setgetPaymentMode(String paymentMode)
    {
        this.paymentMode = paymentMode;
    }

    // Implement your code here
}

class Tester {
    public static void main(String[] args) {

        Bill bill1 = new Bill("DebitCard");
        Bill bill2 = new Bill("PayPal");

        // Create more objects and add them to the bills array for testing your code

        Bill[] bills = { bill1, bill2 };

        for (Bill bill : bills) {
            System.out.println("Bill Details");
            System.out.println("Bill Id: " + bill.getBillId());
            System.out.println("Payment method: " + bill.getPaymentMode());
            System.out.println();
        }
    }
}

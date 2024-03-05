import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;

public class RPS implements ActionListener {

    Random random = new Random();
    JFrame Frame = new JFrame();
    JPanel titlePanel = new JPanel();
    JPanel buttonPanel = new JPanel();
    JLabel textField = new JLabel();
    JLabel computer_label = new JLabel();
    JLabel user_label = new JLabel();
    JButton[] buttons = new JButton[3];

    String[] labels = {"Rock", "Paper", "Scissors"};
    String user_input;
    String computer_input;

    RPS() {
        

        Frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        Frame.setSize(1000, 1000);
        Frame.getContentPane().setBackground(new Color(50, 50, 50));
        Frame.setLayout(new BorderLayout());
        Frame.setVisible(true);

        textField.setBackground(new Color(25, 25, 25));
        textField.setForeground(new Color(255, 255, 255));
        textField.setFont(new Font("Ink Free", Font.BOLD, 75));
        textField.setHorizontalAlignment(JLabel.CENTER);
        textField.setText("Rock, Paper Scissors!");
        textField.setOpaque(true);

        computer_label.setBackground(new Color (25, 25, 25));
        computer_label.setForeground(new Color(255, 255, 255));
        computer_label.setFont(new Font("Ink Free", Font.BOLD, 75));
        computer_label.setText("Awaiting System!");
        computer_label.setHorizontalAlignment(JLabel.CENTER);
        computer_label.setOpaque(true);

        user_label.setBackground(new Color (25, 25, 25));
        user_label.setForeground(new Color(255, 255, 255));
        user_label.setFont(new Font("Ink Free", Font.BOLD, 75));
        user_label.setText("Awaiting User Input!");
        user_label.setHorizontalAlignment(JLabel.CENTER);
        user_label.setOpaque(true);

        titlePanel.setLayout(new BorderLayout());
        titlePanel.setBounds(0,0, 800, 100);

        buttonPanel.setLayout(new GridLayout(3, 0));
        buttonPanel.setBackground(new Color(150, 150, 150));

        for (int i = 0; i < 3; i++) {
            buttons[i] = new JButton();
            buttons[i].setText(labels[i]);
            buttons[i].setForeground(Color.BLACK);
            buttons[i].addActionListener(this);
            buttons[i].setBackground(new Color(random.nextInt(0, 255), random.nextInt(0, 255), random.nextInt(0, 255)));

            buttonPanel.add(buttons[i]);
        }

        titlePanel.add(textField);
        Frame.add(computer_label, BorderLayout.CENTER);
        Frame.add(titlePanel, BorderLayout.NORTH);
        Frame.add(buttonPanel, BorderLayout.SOUTH);
        //Frame.add(user_label, BorderLayout.AFTER_LINE_ENDS);

        try {
            Thread.sleep(2000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        for (int i =0; i <3; i++) {
            computer_label.setText(labels[i]);

            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }

    public void comp_inp() {
        computer_input = labels[random.nextInt(0, 3)];
        computer_label.setText("<html><br/>Computer: " + computer_input + "<br> User Input: " + user_input + " </html>");
    }
    

    public void check() {
        comp_inp();
        user_label.setText("User: " + user_input);

        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        if (user_input == computer_input) {
            textField.setText("Its a Tie");
        } else if (
                (user_input == "Rock" && computer_input == "Scissors") ||
                (user_input == "Paper" && computer_input == "Rock") ||
                (user_input == "Scissors" && computer_input == "Paper")
            ) 
            
        {
            textField.setText("User Wins");
        } else {
            textField.setText("Computer Wins!");
        }
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        for (int i =0; i < 3; i++) {
            if (e.getSource() == buttons[i]) {
                user_input = buttons[i].getText();
                check();
            }

            buttons[i].setEnabled(false);
        }
    }

}
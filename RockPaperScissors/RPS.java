import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;
import java.util.HashMap;

public class RPS implements ActionListener {
    
    Random random = new Random();
    JFrame Frame = new JFrame();
    JPanel titlePanel = new JPanel();
    JPanel buttonPanel = new JPanel();
    JLabel textField = new JLabel();
    JLabel computer_label = new JLabel();
    JLabel user_label = new JLabel();
    JButton[] buttons = new JButton[3];
    HashMap<String, String> RPSObj = new HashMap<>();

    String[] labels = {"Rock", "Paper", "Scissors"};
    String user_input;
    String computer_input;

    public void EnableButtons(boolean bool) {
        buttons[0].setEnabled(bool);
        buttons[1].setEnabled(bool);
        buttons[2].setEnabled(bool);
    }

    RPS() {
        RPSObj.put("Rock", "🪨");
        RPSObj.put("Scissors", "✂️");
        RPSObj.put("Paper", "🗏");
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

        computer_label.setBackground(new Color(25, 25, 25));
        computer_label.setForeground(new Color(255, 255, 255));
        computer_label.setFont(new Font("Ink Free", Font.BOLD, 60));
        computer_label.setText("Awaiting System!");
        computer_label.setHorizontalAlignment(JLabel.CENTER);
        computer_label.setOpaque(true);

        user_label.setBackground(new Color(25, 25, 25));
        user_label.setForeground(new Color(255, 255, 255));
        user_label.setFont(new Font("Ink Free", Font.BOLD, 75));
        user_label.setText("Awaiting User Input!");
        user_label.setHorizontalAlignment(JLabel.CENTER);
        user_label.setOpaque(true);

        titlePanel.setLayout(new BorderLayout());
        titlePanel.setBounds(0, 0, 800, 100);

        buttonPanel.setLayout(new GridLayout(3, 3));
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

        startNewGame();
    }

    // New method to handle starting/restarting the game
    private void startNewGame() {
        EnableButtons(false);
        textField.setText("Rock, Paper, Scissors!");
        computer_label.setText("Get Ready!");

        // Run the countdown in a separate thread to not freeze the UI
        new Thread(() -> {
            try {
                Thread.sleep(1000);
                for (int i = 0; i < 3; i++) {
                    final String label = labels[i];
                    SwingUtilities.invokeLater(() -> computer_label.setText(label));
                    Thread.sleep(700);
                }
                SwingUtilities.invokeLater(() -> {
                    computer_label.setText("Choose!");
                    EnableButtons(true);
                });
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }).start();
    }

    public void comp_inp() {
        computer_input = labels[random.nextInt(0, 3)];
        computer_label.setText("<html><br/>Computer: " + RPSObj.get(computer_input) + "<br>User:" + RPSObj.get(user_input) + "</html>");
    }

    public void check() {
        comp_inp();
        user_label.setText("User: " + user_input);

        if (user_input.equals(computer_input)) {
            textField.setText("It's a Tie!");
        } else if (
                (user_input.equals("Rock") && computer_input.equals("Scissors")) ||
                (user_input.equals("Paper") && computer_input.equals("Rock")) ||
                (user_input.equals("Scissors") && computer_input.equals("Paper"))
        ) {
            textField.setText("User Wins!");
        } else {
            textField.setText("Computer Wins!");
        }

        // Add a small delay before restarting
        new Thread(() -> {
            try {
                Thread.sleep(2000);
                SwingUtilities.invokeLater(() -> startNewGame());
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }).start();
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        for (int i = 0; i < 3; i++) {
            if (e.getSource() == buttons[i]) {
                user_input = buttons[i].getText();
                check();
            }
            buttons[i].setEnabled(false);
        }
    }
}
import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;

public class TicTacToe implements ActionListener {

    Random random = new Random();
    JFrame Frame = new JFrame();
    JPanel titlePanel = new JPanel();
    JPanel buttonPanel = new JPanel();
    JLabel textField = new JLabel();
    JButton[] buttons = new JButton[9];
    boolean player1turn;

    TicTacToe() {
        Frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        Frame.setSize(1000, 1000);
        Frame.getContentPane().setBackground(new Color(50, 50, 50));
        Frame.setLayout(new BorderLayout());
        Frame.setVisible(true);

        textField.setBackground(new Color(25, 25, 25));
        textField.setForeground(new Color(255, 255, 255));
        textField.setFont(new Font("Ink Free", Font.BOLD, 75));
        textField.setHorizontalAlignment(JLabel.CENTER);
        textField.setText("TicTacToe");
        textField.setOpaque(true);

        titlePanel.setLayout(new BorderLayout());
        titlePanel.setBounds(0,0, 800, 100);

        buttonPanel.setLayout(new GridLayout(3, 3));
        buttonPanel.setBackground(new Color(150, 150, 150));

        for (int i = 0; i < 9; i++) {
            buttons[i] = new JButton();
            buttonPanel.add(buttons[i]);
            buttons[i].setFont(new Font("MV Boli", Font.BOLD, 130));
            buttons[i].setFocusable(false);
            buttons[i].addActionListener(this);
            buttons[i].setBackground(new Color(255, 255, 255));
        }

        titlePanel.add(textField);
        Frame.add(titlePanel, BorderLayout.NORTH);
        Frame.add(buttonPanel);

        FirstTurn();
    }

    public void actionPerformed(ActionEvent e) {
        for (int i =0; i < 9; i++) {
            if (e.getSource() == buttons[i]) {
                if (player1turn) {
                    if (buttons[i].getText() == "") {
                        buttons[i].setForeground(new Color(255, 0,0));
                        buttons[i].setText("X");
                        player1turn = false;
                        textField.setText("O Turn");
                        check();
                    }
                } else {
                    if (buttons[i].getText() == "") {
                        buttons[i].setForeground(new Color(0, 0,255));
                        buttons[i].setText("O");
                        player1turn = true;
                        textField.setText("X Turn");
                        check();
                    }
                }
            }
        }
    }

    public void FirstTurn(){
        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        if (random.nextInt(2) == 0) {
            player1turn = true;
            textField.setText("X Turn");
        } else {
            player1turn = false;
            textField.setText("O Turn");
        }
    }

    public boolean checkButtons(int num, String text) {
        return (buttons[num].getText() == text);
    }
    
    public void check() {
        // X Wins
        if (checkButtons(0, "X") && checkButtons(1, "X") && checkButtons(2, "X"))  {
            xWins(0,1,2);
        }
        if (checkButtons(3, "X") && checkButtons(4, "X") && checkButtons(5, "X"))  {
            xWins(3, 4, 5);
        }
        if (checkButtons(6, "X") && checkButtons(7, "X") && checkButtons(8, "X"))  {
            xWins(6,7,8);
        }
        if (checkButtons(0, "X") && checkButtons(3, "X") && checkButtons(6, "X"))  {
            xWins(0,3,6);
        }
        if (checkButtons(1, "X") && checkButtons(4, "X") && checkButtons(7, "X"))  {
            xWins(1,4,7);
        }
        if (checkButtons(2, "X") && checkButtons(5, "X") && checkButtons(8, "X"))  {
            xWins(2,5,8);
        }
        if (checkButtons(0, "X") && checkButtons(4, "X") && checkButtons(8, "X"))  {
            xWins(0,4,8);
        }
        if (checkButtons(2, "X") && checkButtons(4, "X") && checkButtons(6, "X"))  {
            xWins(2,4,6);
        }

        // O Wins
        if (checkButtons(0, "O") && checkButtons(1, "O") && checkButtons(2, "O"))  {
            oWins(0,1,2);
        }
        if (checkButtons(3, "O") && checkButtons(4, "O") && checkButtons(5, "O"))  {
            oWins(3, 4, 5);
        }
        if (checkButtons(6, "O") && checkButtons(7, "O") && checkButtons(8, "O"))  {
            oWins(6,7,8);
        }
        if (checkButtons(0, "O") && checkButtons(3, "O") && checkButtons(6, "O"))  {
            oWins(0,3,6);
        }
        if (checkButtons(1, "O") && checkButtons(4, "O") && checkButtons(7, "O"))  {
            oWins(1,4,7);
        }
        if (checkButtons(2, "O") && checkButtons(5, "O") && checkButtons(8, "O"))  {
            oWins(2,5,8);
        }
        if (checkButtons(0, "O") && checkButtons(4, "O") && checkButtons(8, "O"))  {
            oWins(0,4,8);
        }
        if (checkButtons(2, "O") && checkButtons(4, "O") && checkButtons(6, "O"))  {
            oWins(2,4,6);
        }
    }

    public void xWins(int a, int b, int c) {
        buttons[a].setBackground(Color.GREEN);
        buttons[b].setBackground(Color.GREEN);
        buttons[c].setBackground(Color.GREEN);

        for (int i =0; i< 9; i++) {
            buttons[i].setEnabled(false);
        }

        textField.setText("X Wins");

    }

    public void oWins(int a, int b, int c) {
        buttons[a].setBackground(Color.GREEN);
        buttons[b].setBackground(Color.GREEN);
        buttons[c].setBackground(Color.GREEN);

        for (int i =0; i< 9; i++) {
            buttons[i].setEnabled(false);
        }

        textField.setText("O Wins");

    }
}
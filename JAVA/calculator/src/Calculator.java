
import java.awt.Color;
import javax.swing.JOptionPane;

//@author Ahmed Borno
 
public class Calculator extends javax.swing.JFrame {

    
    public Calculator() {
        initComponents();
    }

    
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        l_num1 = new javax.swing.JLabel();
        l_num2 = new javax.swing.JLabel();
        t_num1 = new javax.swing.JTextField();
        t_num2 = new javax.swing.JTextField();
        b_plus = new javax.swing.JButton();
        b_sub = new javax.swing.JButton();
        l_ans = new javax.swing.JLabel();
        t_ans = new javax.swing.JTextField();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Calculator");
        setForeground(new java.awt.Color(0, 102, 102));

        l_num1.setText("num1");

        l_num2.setText("num2");

        b_plus.setBackground(new java.awt.Color(51, 51, 255));
        b_plus.setText("+");
        b_plus.setBorder(javax.swing.BorderFactory.createBevelBorder(javax.swing.border.BevelBorder.RAISED));
        b_plus.setPreferredSize(new java.awt.Dimension(40, 25));
        b_plus.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                b_plusActionPerformed(evt);
            }
        });

        b_sub.setBackground(new java.awt.Color(0, 102, 204));
        b_sub.setText("-");
        b_sub.setBorder(javax.swing.BorderFactory.createBevelBorder(javax.swing.border.BevelBorder.RAISED));
        b_sub.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                b_subActionPerformed(evt);
            }
        });

        l_ans.setText("answer is");

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(l_num1)
                    .addComponent(l_num2)
                    .addComponent(l_ans))
                .addGap(44, 44, 44)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(t_num1)
                    .addComponent(t_num2, javax.swing.GroupLayout.DEFAULT_SIZE, 89, Short.MAX_VALUE)
                    .addComponent(t_ans))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(b_plus, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(b_sub, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addContainerGap(148, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                        .addComponent(l_num1)
                        .addComponent(t_num1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addComponent(b_plus, javax.swing.GroupLayout.PREFERRED_SIZE, 0, Short.MAX_VALUE))
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(17, 17, 17)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(l_num2)
                            .addComponent(t_num2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(18, 18, 18)
                        .addComponent(b_sub, javax.swing.GroupLayout.PREFERRED_SIZE, 0, Short.MAX_VALUE)))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(l_ans)
                    .addComponent(t_ans, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addContainerGap(196, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void b_plusActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_b_plusActionPerformed
        int num1, num2, answer;
        try {
            num1 = Integer.parseInt(this.t_num1.getText());
            num2 = Integer.parseInt(this.t_num2.getText());
            answer = num1 + num2;
            t_ans.setText(String.valueOf(answer));
        } catch (Exception e) {
            JOptionPane.showMessageDialog(null, "Fill The Field-", "ERROR", JOptionPane.ERROR_MESSAGE);
        }
    }//GEN-LAST:event_b_plusActionPerformed

    private void b_subActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_b_subActionPerformed
        int num1, num2, answer;
        try {
            num1 = Integer.parseInt(this.t_num1.getText());
            num2 = Integer.parseInt(this.t_num2.getText());
            answer = num1 - num2;
            t_ans.setText(String.valueOf(answer));
        } catch (Exception e) {
            JOptionPane.showMessageDialog(null, "Fill The Field-", "ERROR", JOptionPane.ERROR_MESSAGE);
        }
    }//GEN-LAST:event_b_subActionPerformed

    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(Calculator.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Calculator.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Calculator.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Calculator.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Calculator().setVisible(true);
                
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton b_plus;
    private javax.swing.JButton b_sub;
    private javax.swing.JLabel l_ans;
    private javax.swing.JLabel l_num1;
    private javax.swing.JLabel l_num2;
    private javax.swing.JTextField t_ans;
    private javax.swing.JTextField t_num1;
    private javax.swing.JTextField t_num2;
    // End of variables declaration//GEN-END:variables
}

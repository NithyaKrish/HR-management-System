/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * ResponceForm.java
 *
 * Created on Nov 20, 2014, 12:11:44 AM
 */

/**
 *
 * @author sowmya
 */
package cour;
import java.awt.Label;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.*;
import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;

public class ResponceForm extends javax.swing.JFrame {

        String id;
        String name;
    /** Creates new form ResponceForm */
    
public ResponceForm(String s,String msg) {
        
	initComponents();
        
	id=s;
        
	if(msg.equals("1"))
        {
            
		jLabel1.setText("You are selected");

        
	}
 
	else
        {
           
		 jLabel1.setText(msg);
           
		 jButton2.setVisible(true);
       
		 }
        
	welcomeMsg();
   
	 }

    /** This method is called from within the constructor to
     * initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is
     * always regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
   
	 private void initComponents() {

        	
		jLabel1 = new javax.swing.JLabel();
       
		 jLabel2 = new javax.swing.JLabel();
       
		 jButton1 = new javax.swing.JButton();
       
		 jButton2 = new javax.swing.JButton();
       
		 jLabel3 = new javax.swing.JLabel();
       
		 jButton3 = new javax.swing.JButton();

       
		 setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

       
		 jButton1.setText("Sign Out");
       
		 jButton1.addActionListener(new java.awt.event.ActionListener() {
            
		public void actionPerformed(java.awt.event.ActionEvent evt) {
                
			jButton1ActionPerformed(evt);
            }
        });

       
			 jButton2.setText("Goto Quiz");
       
			 jButton2.addActionListener(new java.awt.event.ActionListener() {
            
			public void actionPerformed(java.awt.event.ActionEvent evt) {
               
				 jButton2ActionPerformed(evt);
            }
        });

       
				 jButton3.setText("Show result");
  	 
				  jButton3.addActionListener(new java.awt.event.ActionListener() {
            
						public void actionPerformed(java.awt.event.ActionEvent evt) {
                
							jButton3ActionPerformed(evt);
            }
        });

       
								 javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        
								getContentPane().setLayout(layout);
       
								 layout.setHorizontalGroup(
 layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addGap(50, 50, 50)
                        .addComponent(jButton2)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 165, Short.MAX_VALUE)
                        .addComponent(jButton1, javax.swing.GroupLayout.PREFERRED_SIZE, 91, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(38, 38, 38)
                        .addComponent(jLabel2, javax.swing.GroupLayout.PREFERRED_SIZE, 269, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(layout.createSequentialGroup()
                        .addContainerGap()
                        .addComponent(jLabel1, javax.swing.GroupLayout.DEFAULT_SIZE, 375, Short.MAX_VALUE))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(148, 148, 148)
                        .addComponent(jLabel3, javax.swing.GroupLayout.PREFERRED_SIZE, 161, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addContainerGap(296, Short.MAX_VALUE)
                        .addComponent(jButton3)))
                .addContainerGap())
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(34, 34, 34)
                .addComponent(jLabel2, javax.swing.GroupLayout.PREFERRED_SIZE, 22, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(61, 61, 61)
                .addComponet(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 52, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(30, 30, 30)
                        .addComponent(jLabel3, javax.swing.GroupLayout.PREFERRED_SIZE, 14, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(layout.createSequentialGroup()
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jButton3)))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jButton1)
                    .addComponent(jButton2))
                .addContainerGap(37, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initcoponents

    private void jButton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton1ActionPerformed
        // TODO add your handling code here:
        setVisible(false);
        new Welocome().setVisible(true);

    }//GEN-LAST:event_jButton1ActionPerformed

    private void jButton2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton2ActionPerformed
        // TODO add your handling code here:
        for(int i=1;i<3;i++){
        try {
            int tot_marks=0;
                Connection conn = null;
		String driverName = "oracle.jdbc.OracleDriver";
		String url = "jdbc:oracle:thin:@127.0.0.1:1521:XE";
		Class.forName(driverName);
		conn = DriverManager.getConnection(url, "system", "sowmi");
                
                PreparedStatement pst;

                pst = conn.prepareStatement("update signup set marks=0 where id=?");
                pst.setString(1,id);
                pst.executeUpdate();
                pst = conn.prepareStatement("select question,option1,option2,option3,option4,answer,mark from questions where q_id=?");
                pst.setInt(1,i);
                ResultSet rs = pst.executeQuery();
                String question="";
                String option1="";
                String option2="";
                String option3="";
                String option4="";
                String answer="";
                int mark=0;
                
                while (rs.next()) {
                    
                    question= rs.getString("question");
                    option1 = rs.getString("option1");
                    option2 = rs.getString("option2");
                    option3 =rs.getString("option3");
                    option4 =rs.getString("option4");
                    answer=rs.getString("answer");
                    mark=rs.getInt("mark");
                    quiz(question,option1,option2,option3,option4,answer,mark);
                    }
               
               
        } catch (Exception ex) {
            System.out.println(ex);

        }
        }
        jButton2.setVisible(false);
        jLabel1.setText(null);
    }//GEN-LAST:event_jButton2ActionPerformed

    private void jButton3ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton3ActionPerformed
        // TODO add your handling code here:
        try {
            int tot_marks=0;
                Connection conn = null;
		String driverName = "oracle.jdbc.OracleDriver";
		String url = "jdbc:oracle:thin:@127.0.0.1:1521:XE";
		Class.forName(driverName);
		conn = DriverManager.getConnection(url, "system", "sowmi");

                PreparedStatement pst;
            pst = conn.prepareStatement("select marks from signup where id=?");
                pst.setString(1,id);
                 ResultSet rs = pst.executeQuery();
                 if (rs.next())
                 tot_marks=rs.getInt("marks");
                 if(tot_marks>=10 )
                 {
                     jLabel2.setText(null);
                     jLabel2.setText("Congrats!!! you r selected");
                     jButton2.setVisible(false);
                 }
                 else
                 {
                     jLabel2.setText(null);
                     jLabel2.setText("sorry.....you are not selected...Better luck next time ");
                     jButton2.setVisible(false);
 }}catch (Exception ex) {
            System.out.println(ex);

        }
    }//GEN-LAST:event_jButton3ActionPerformed
     public void quiz(String question,String option1,String option2,String option3,String option4,String answer,int mark)
    {
         final JComboBox comboBox = new JComboBox();
         final JFrame frame = new JFrame("Quiz");
         JLabel label=new JLabel("Question :" +question);
          comboBox.addItem("Select answer");
          comboBox.addItem(option1);
          comboBox.addItem(option2);
          comboBox.addItem(option3);
          comboBox.addItem(option4);
          JLabel label1=new JLabel();
         JButton b= new JButton("Submit");
         final int m=mark;
         frame.setLayout(null);
        
          try {
                
		String driverName = "oracle.jdbc.OracleDriver";
		String url = "jdbc:oracle:thin:@127.0.0.1:1521:XE";
		Class.forName(driverName);
		final Connection conn = DriverManager.getConnection(url, "system", "sowmi");
                final String id1=id;
                comboBox.setBounds(150,300,100,20);
                label1.setBounds(70,320,200,100);
                frame.add(label);
                label.setBounds(70,100,200,100);
                final String ans=answer;
                frame.add(comboBox);
                frame.add(b);
                b.setBounds(200,400,80,30);
                
                
                b.addActionListener(new ActionListener() {

                public void actionPerformed(ActionEvent event) {
                    if(comboBox.getSelectedItem().toString().equals(ans))
                    {
                        try{
                     CallableStatement vStatement = conn.prepareCall( "{ ? = call addmark( ?,? ) }" );
                     vStatement.setString( 2,id1 );
                     vStatement.setInt( 3,m );
                     vStatement.registerOutParameter( 1, Types.VARCHAR );
                     vStatement.executeUpdate();
                     frame.setVisible(false);
                    }catch(Exception e)
                        {
                        System.out.println(e);
                        }
                    }
 
                }
                }
                );

         frame.setVisible(false);
         frame.setBounds(150,150,500,500);

    }catch (Exception ex) {
            System.out.println(ex);       }
     }
    /**
    * @param args the command line arguments
    */
     public void welcomeMsg()
    {
        try{
                Connection conn = null;
		String driverName = "oracle.jdbc.OracleDriver";
		String url = "jdbc:oracle:thin:@127.0.0.1:1521:XE";
		Class.forName(driverName);
		conn = DriverManager.getConnection(url, "system", "sowmi");
                String sql = "SELECT name FROM signup where id=?";
                PreparedStatement pt = conn.prepareStatement(sql);
                pt.setString(1, id);
                ResultSet rs = pt.executeQuery();
                rs.next();
                name = rs.getString("name");
                conn.close();
                jLabel2.setText("Welcome back  "+name);

        }catch(Exception ex) {
            System.out.print(ex);
        }
    }
    public static void main(String args[]) {
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                //new ResponceForm().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton jButton1;
    private javax.swing.JButton jButton2;
    private javax.swing.JButton jButton3;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    // End of variables declaration//GEN-END:variables

}

using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO.Ports;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.Button;
using System.Reflection.Emit;
using TheArtOfDev.HtmlRenderer.Adapters.Entities;
using Bunifu.UI.WinForms;
using System.Windows.Input;

namespace yk_app_final
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        String[] portlar = SerialPort.GetPortNames(); // SeriPort isimlerini portlar nesnesinin içine alıyor.
        string keyNumber, shortcut1, shortcut2, message;  

        private void Form1_Load(object sender, EventArgs e)
        {
            // Formu tasarım ekranındakinden çalışması gereken boyuta ayarlar.
            this.Size = new Size(394, 482);
            // From'un her zaman ekranın tam ortasında olmasını sağlayan kod.
            this.StartPosition = FormStartPosition.Manual;
            int x = (Screen.PrimaryScreen.Bounds.Width - this.Width) / 2;
            int y = (Screen.PrimaryScreen.Bounds.Height - this.Height) / 2;
            this.Location = new Point(x, y);
            // Panel2'nin ve Panel3'ün form açıldığında olması gereken konumlarını ayarladım ve Panel2 güzkmemesi için visible = false yaptım.
            Panel2.Location = new Point(-1, 41);
            Panel3.Location = new Point(-1, 41);
            Panel2.Visible = false;
            // portlar'ı döngüyle dropdown menüye ekler ve 0. indexi seçer.
            foreach (string port in portlar) 
            {
                portDropdown.Items.Add(port);
                portDropdown.SelectedIndex = 0;
            }

            sc2comboBox.SelectedIndex = 0;

            keyLbl.Visible = false;
            sc1Lbl.Visible = false;
            sc2Lbl.Visible = false;
            msgLbl.Visible = false;

            sc2comboBox.Enabled = false;
            Panel1.Enabled = false;

            // key butonalrının textlerini default değerlerine atar
            key1.Text = Properties.Settings.Default.button1Text;
            key2.Text = Properties.Settings.Default.button2Text;
            key3.Text = Properties.Settings.Default.button3Text;
            key4.Text = Properties.Settings.Default.button4Text;
            key5.Text = Properties.Settings.Default.button5Text;
            key6.Text = Properties.Settings.Default.button6Text;
            key7.Text = Properties.Settings.Default.button7Text;
            key8.Text = Properties.Settings.Default.button8Text;
            key9.Text = Properties.Settings.Default.button9Text;
            key10.Text = Properties.Settings.Default.button10Text;
            key11.Text = Properties.Settings.Default.button11Text;
            key12.Text = Properties.Settings.Default.button12Text;

        }

        private void connectionSwitch_CheckedChanged(object sender, EventArgs e)
        {
            if (connectionSwitch.Checked == true)
            {
                serialPort1.PortName = portDropdown.Text;
                serialPort1.Open();
                Panel3.Visible = false;
                bunifuSnackbar1.Show(
                    this, 
                    "Atama yapmak istediğiniz tuşa basın ve\r\naçılan sekmeden istediğiniz atamayı yapın\r\n", 
                    BunifuSnackbar.MessageTypes.Success,
                    10000);
                Panel1.Enabled = true;
            }
            else
            {
                serialPort1.Close();
                Panel3.Visible = true;
            }
        }

        private void logoBtn_Click(object sender, EventArgs e)
        {
            System.Diagnostics.Process.Start("https://www.youtube.com/@mucoderr");
        }

        //Uygulama minimize olduğunda görev çubuğundan kalkıp gizli simgeler kısmında gözükmesi.
        private void bunifuFormControlBox1_MinimizeClicked(object sender, EventArgs e)
        {
            this.ShowInTaskbar = false; // Görev çubuğunda gözükmez
            notifyIcon1.Visible = true; // Sistem tepsisindeki simge gösterilir
        }

        private void notifyIcon1_MouseDoubleClick(object sender, MouseEventArgs e)
        {
            this.WindowState = FormWindowState.Normal; // Form normal boyutta görüntülenir
            this.ShowInTaskbar = true; // Görev çubuğunda gözükür
            notifyIcon1.Visible = false; // Sistem tepsisindeki simge gizlenir
        }

        private void keyBtn1_Click(object sender, EventArgs e)
        {
            tusAtamaAc();
            tusLbl.Text = "Tuş: 1";
            keyLbl.Text = "1";
        }

        private void keyBtn2_Click(object sender, EventArgs e)
        {
            tusAtamaAc();
            tusLbl.Text = "Tuş: 2";
            keyLbl.Text = "2";
        }

        private void keyBtn3_Click(object sender, EventArgs e)
        {
            tusAtamaAc();
            tusLbl.Text = "Tuş: 3";
            keyLbl.Text = "3";
        }

        private void keyBtn4_Click(object sender, EventArgs e)
        {
            tusAtamaAc();
            tusLbl.Text = "Tuş: 4";
            keyLbl.Text = "4";
        }

        private void keyBtn5_Click(object sender, EventArgs e)
        {
            tusAtamaAc();
            tusLbl.Text = "Tuş: 5";
            keyLbl.Text = "5";
        }

        private void keyBtn6_Click(object sender, EventArgs e)
        {
            tusAtamaAc();
            tusLbl.Text = "Tuş: 6";
            keyLbl.Text = "6";
        }

        private void keyBtn7_Click(object sender, EventArgs e)
        {
            tusAtamaAc();
            tusLbl.Text = "Tuş: 7";
            keyLbl.Text = "7";
        }

        private void keyBtn8_Click(object sender, EventArgs e)
        {
            tusAtamaAc();
            tusLbl.Text = "Tuş: 8";
            keyLbl.Text = "8";
        }

        private void keyBtn9_Click(object sender, EventArgs e)
        {
            tusAtamaAc();
            tusLbl.Text = "Tuş: 9";
            keyLbl.Text = "9";
        }

        private void keyBtn10_Click(object sender, EventArgs e)
        {
            tusAtamaAc();
            tusLbl.Text = "Tuş: 10";
            keyLbl.Text = "10";
        }

        private void keyBtn11_Click(object sender, EventArgs e)
        {
            tusAtamaAc();
            tusLbl.Text = "Tuş: 11";
            keyLbl.Text = "11";
        }

        private void keyBtn12_Click(object sender, EventArgs e)
        {
            tusAtamaAc();
            tusLbl.Text = "Tuş: 12";
            keyLbl.Text = "12";
        }

        private void ifScBtn_Click(object sender, EventArgs e)
        {
            kısayolLbl.Text = "if";
            sc1Lbl.Text = "if";
            message = kısayolLbl.Text;
        }

        private void doScBtn_Click(object sender, EventArgs e)
        {
            kısayolLbl.Text = "do";
            sc1Lbl.Text = "do";
            message = kısayolLbl.Text;
        }

        private void whileScBtn_Click(object sender, EventArgs e)
        {
            kısayolLbl.Text = "while";
            sc1Lbl.Text = "while";
            message = kısayolLbl.Text;
        }

        private void deuBtn_Click(object sender, EventArgs e)
        {
            kısayolLbl.Text = "deu";
            sc1Lbl.Text = "deu";
            message = kısayolLbl.Text;
        }

        private void debis_Click(object sender, EventArgs e)
        {
            kısayolLbl.Text = "debis";
            sc1Lbl.Text = "debis";
            message = kısayolLbl.Text;
        }

        private void sakaiBtn_Click(object sender, EventArgs e)
        {
            kısayolLbl.Text = "sakai";
            sc1Lbl.Text = "sakai";
            message = kısayolLbl.Text;
        }

        private void ctrlScBtn_Click(object sender, EventArgs e)
        {
            sc1Lbl.Text = "ctrl";
            kısayolLbl.Text = sc1Lbl.Text;
            sc2comboBox.Enabled = true;
        }

        private void altScBtn_Click(object sender, EventArgs e)
        {
            sc1Lbl.Text = "alt";
            kısayolLbl.Text = sc1Lbl.Text;
            sc2comboBox.Enabled = true;
        }

        private void shiftScBtn_Click(object sender, EventArgs e)
        {
            sc1Lbl.Text = "shift";
            kısayolLbl.Text = sc1Lbl.Text;
            sc2comboBox.Enabled = true;
        }

        private void commentBtn_Click(object sender, EventArgs e)
        {
            sc1Lbl.Text = "ctrl+k+c";
            kısayolLbl.Text = sc1Lbl.Text;
        }

        private void intellisenseBtn_Click(object sender, EventArgs e)
        {
            sc1Lbl.Text = "shift+alt+f";
            kısayolLbl.Text = sc1Lbl.Text;
        }

        private void vsopenBtn_Click(object sender, EventArgs e)
        {
            sc1Lbl.Text = "vs-open";
            kısayolLbl.Text = sc1Lbl.Text;
        }

        private void sc2comboBox_SelectedIndexChanged(object sender, EventArgs e)
        {
            sc2Lbl.Text = sc2comboBox.SelectedItem.ToString();

            if (sc2comboBox.SelectedIndex > 0)
            {
                uyariLbl1.Visible = true;
            }
            else
            {
                uyariLbl1.Visible = false;
            }
        }

        private void gonderBtn_Click(object sender, EventArgs e)
        {
            keyNumber = keyLbl.Text;
            shortcut1 = sc1Lbl.Text;
            shortcut2 = sc2Lbl.Text;

            if (sc2Lbl.Text == "")
            {
                message = keyNumber + "," + shortcut1;
                msgLbl.Text = keyNumber + "," + shortcut1;
            }
            else
            {
                message = keyNumber + "," + shortcut1 + "+" + shortcut2;
                msgLbl.Text = keyNumber + "," + shortcut1 + "+" + shortcut2;
            }

            sc2comboBox.Enabled = false;

            // Uygulama kapatılıp açılsa dahi tuşlara atanan kısayollar buttonların textlerinde kalıyor.
            // burdaki switch yapısı keyNumber case'lerdeki değerlerden hangisini alıyor ise ona göre button'ların defaul text değerlerini atanan kısayol olarak değiştiriyor.
            switch (keyNumber)
            {
                case "1":
                    Properties.Settings.Default.button1Text = kısayolLbl.Text;
                    key1.Text = kısayolLbl.Text;
                    break;
                case "2":
                    Properties.Settings.Default.button2Text = kısayolLbl.Text;
                    key2.Text = kısayolLbl.Text;
                    break;
                case "3":
                    Properties.Settings.Default.button3Text = kısayolLbl.Text;
                    key3.Text = kısayolLbl.Text;
                    break;
                case "4":
                    Properties.Settings.Default.button4Text = kısayolLbl.Text;
                    key4.Text = kısayolLbl.Text;
                    break;
                case "5":
                    Properties.Settings.Default.button5Text = kısayolLbl.Text;
                    key5.Text = kısayolLbl.Text;
                    break;
                case "6":
                    Properties.Settings.Default.button6Text = kısayolLbl.Text;
                    key6.Text = kısayolLbl.Text;
                    break;
                case "7":
                    Properties.Settings.Default.button7Text = kısayolLbl.Text;
                    key7.Text = kısayolLbl.Text;
                    break;
                case "8":
                    Properties.Settings.Default.button8Text = kısayolLbl.Text;
                    key8.Text = kısayolLbl.Text;
                    break;
                case "9":
                    Properties.Settings.Default.button9Text = kısayolLbl.Text;
                    key9.Text = kısayolLbl.Text;
                    break;
                case "10":
                    Properties.Settings.Default.button10Text = kısayolLbl.Text;
                    key10.Text = kısayolLbl.Text;
                    break;
                case "11":
                    Properties.Settings.Default.button11Text = kısayolLbl.Text;
                    key11.Text = kısayolLbl.Text;
                    break;
                case "12":
                    Properties.Settings.Default.button12Text = kısayolLbl.Text;
                    key12.Text = kısayolLbl.Text;
                    break;
                default:
                    // Eğer geçersiz bir anahtar numarası girildiyse, burada bir hata işlemi yapılabilir
                    break;
            }
            // Save() özelliği ile değerleri kaydediyoruz.
            Properties.Settings.Default.Save();

            serialPort1.Write(message); // Mesajı seri port üzerinden Arduino'ya gönderiyoruz

            Panel1.Visible = true;
            Panel2.Visible = false;
        }

        private void clearBtn_Click(object sender, EventArgs e)
        {
            clear();
            sc2comboBox.Enabled = false;
        }

        private void iptalBtn_Click(object sender, EventArgs e)
        {
            Panel1.Visible = true;
            Panel2.Visible = false;
            sc1Lbl.Text = "";
            sc2Lbl.Text = "";
            sc2comboBox.SelectedIndex = 0;
            sc2comboBox.Enabled = false;
        }

        private void saveBtn_Click(object sender, EventArgs e)
        {
            kısayolLbl.Text = sc1Lbl.Text + "+" + sc2Lbl.Text;
        }

        void tusAtamaAc()
        {
            Panel1.Visible = false;
            Panel2.Visible = true;
            clear();
        }

        void clear()
        {
            sc2comboBox.SelectedIndex = 0;
            msgLbl.Text = "";
            kısayolLbl.Text = "";
            sc1Lbl.Text = "";
            sc2Lbl.Text = "";
            kısayolLbl.Text = "";
        }
    }
}

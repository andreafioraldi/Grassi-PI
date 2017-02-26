/******************************************************************************
* Copyright (c) 2014 Andrea Fioraldi
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*     * Redistributions of source code must retain the above copyright
*       notice, this list of conditions and the following disclaimer.
*     * Redistributions in binary form must reproduce the above copyright
*       notice, this list of conditions and the following disclaimer in the
*       documentation and/or other materials provided with the distribution.
*     * Neither the name of the Liceo Grassi Latina nor the
*       names of its contributors may be used to endorse or promote products
*       derived from this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY ANDREA FIORALDI ``AS IS'' AND ANY
* EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL ANDREA FIORALDI BE LIABLE FOR ANY
* DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#pragma once

namespace GrassiPI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing; //namespace di Graphics
	using namespace System::Threading; //namespace di Random

	// Riepilogo per Form1

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:

		// Liberare le risorse in uso.

		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textD;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textF;
	private: System::Windows::Forms::TextBox^  insertBox;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  rectP;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  labellicense;
	private: System::Windows::Forms::NumericUpDown^  Pdim;

	private: System::Windows::Forms::Label^  label3;





	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textD = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textF = (gcnew System::Windows::Forms::TextBox());
			this->insertBox = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->rectP = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->labellicense = (gcnew System::Windows::Forms::Label());
			this->Pdim = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pdim))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(362, 297);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Calcola!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textD
			// 
			this->textD->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textD->Location = System::Drawing::Point(273, 58);
			this->textD->Multiline = true;
			this->textD->Name = L"textD";
			this->textD->ReadOnly = true;
			this->textD->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textD->Size = System::Drawing::Size(164, 90);
			this->textD->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(270, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Dentro :";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(270, 153);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Fuori :";
			// 
			// textF
			// 
			this->textF->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textF->Location = System::Drawing::Point(273, 169);
			this->textF->Multiline = true;
			this->textF->Name = L"textF";
			this->textF->ReadOnly = true;
			this->textF->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textF->Size = System::Drawing::Size(164, 90);
			this->textF->TabIndex = 6;
			// 
			// insertBox
			// 
			this->insertBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->insertBox->Location = System::Drawing::Point(12, 299);
			this->insertBox->Name = L"insertBox";
			this->insertBox->Size = System::Drawing::Size(344, 20);
			this->insertBox->TabIndex = 8;
			this->insertBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::insertBox_KeyPress);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Location = System::Drawing::Point(12, 39);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(252, 252);
			this->panel1->TabIndex = 9;
			this->panel1->Resize += gcnew System::EventHandler(this, &Form1::panel1_Resize);
			// 
			// rectP
			// 
			this->rectP->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->rectP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->rectP->Location = System::Drawing::Point(12, 39);
			this->rectP->Name = L"rectP";
			this->rectP->Size = System::Drawing::Size(93, 50);
			this->rectP->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(395, 7);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(42, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"\?";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// labellicense
			// 
			this->labellicense->AutoSize = true;
			this->labellicense->Location = System::Drawing::Point(0, 0);
			this->labellicense->Name = L"labellicense";
			this->labellicense->Size = System::Drawing::Size(485, 364);
			this->labellicense->TabIndex = 11;
			this->labellicense->Text = resources->GetString(L"labellicense.Text");
			this->labellicense->Visible = false;
			// 
			// Pdim
			// 
			this->Pdim->Location = System::Drawing::Point(111, 10);
			this->Pdim->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {50, 0, 0, 0});
			this->Pdim->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->Pdim->Name = L"Pdim";
			this->Pdim->Size = System::Drawing::Size(120, 20);
			this->Pdim->TabIndex = 12;
			this->Pdim->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"dimensione punti: ";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(449, 329);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Pdim);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->rectP);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->insertBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textF);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textD);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labellicense);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(465, 367);
			this->Name = L"Form1";
			this->Text = L"Grassi PI";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pdim))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int scala; //fattore di scala
		Graphics^ g; //oggetto per il disegno

		//qundo vengono cambiate le dimensioni del form ingrandisce il disegno
		private: void panel1_Resize( Object^ sender, System::EventArgs^ e )
		{
			if(panel1->Width < panel1->Height)
			{
				rectP->Width = panel1->Width;
				rectP->Height = panel1->Width;
			}
			else if (panel1->Width > panel1->Height)
			{				
				rectP->Width = panel1->Height;
				rectP->Height = panel1->Height;
			}
			else if (panel1->Width == panel1->Height)
			{
				rectP->Width = panel1->Width;
				rectP->Height = panel1->Height;
			}

			scala = rectP->Width;
		}

		private: bool checkForNumeric(KeyPressEventArgs^ e)
		{
			const char Delete = (char)8;
			return !Char::IsDigit(e->KeyChar) && e->KeyChar != Delete;
		}

		//serve a far immettere solo caratteri numerici nella textBox di inserimento
		private: void insertBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
		{
			e->Handled = checkForNumeric(e);
		}
		
		//oggetto statico per generare numeri casuali , con seme uguale agli attuali millisecondi
		static Random^ r = gcnew Random((int)DateTime::Now.Millisecond); 

		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//verifico condizioni prima di procedere...
			if ( insertBox->Text == "") return;
			if ( insertBox->Text->Length > 29) //siccome il tipo Decimal può avere al massimo 29 cifre
			{
				MessageBox::Show( "Non puoi inserire un numero con più di 29 cifre!", "Errore Inserimento",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation );
				return;
			}

			//inizializzo lo strumento di disegno
			g = rectP->CreateGraphics();
			g->Clear(Color::White);
			//disegno la circonferenza
			g->DrawEllipse(Pens::Black, RectangleF(0,0, (float)scala , (float)scala ));

			int dentro = 0;
			int fuori = 0;
			Decimal val = Convert::ToDecimal(insertBox->Text);

			float dimensione = (float)Pdim->Value; //ottengo la dimensione dei punti

			for (int i = 0; i < val; i++)
			{
				//genero coordinate
				double x = r->NextDouble();
				double y = r->NextDouble();

				//assegno a caso il segno alle due coordinate
				int xsign = r->Next(0,2);
				if (xsign == 1)
				{
					x = x * (-1);
				}

				int ysign = r->Next(0,2);
				if (ysign == 1)
				{
					y = y * (-1);
				}

				//calcolo il quadrato della distanza dall'origine
				double d = Math::Pow(x, 2.0) + Math::Pow(y, 2.0);

				if (d < 1) // il punto è interno
				{
					dentro++;

					//scalo le coordinate per il disegno
					double nx = scala / 2 + x * scala /2;
					double ny = scala / 2 - y * scala /2;
					//disegno il punto
					g->FillEllipse( Brushes::Black, RectangleF( (float)nx ,  (float)ny , dimensione , dimensione ));

				}
				else if (d == 1)  //il punto è sulla circonferenza
				{
					dentro++;
			
					//scalo le coordinate per il disegno
					double nx = scala / 2 + x * scala /2;
					double ny = scala / 2 - y * scala /2;
					//disegno il punto
					g->FillEllipse( Brushes::Red, RectangleF( (float)nx ,  (float)ny , dimensione , dimensione ));
				
				}
				else if ( d > 1) // il punto è esterno
				{
					fuori++;

					//scalo le coordinate per il disegno
					double nx = scala / 2 + x * scala /2;
					double ny = scala / 2 - y * scala /2;
					//disegno il punto
					g->FillEllipse( Brushes::Green, RectangleF( (float)nx ,  (float)ny , dimensione , dimensione ));
				}
			}

			//output dei risultati
			textD->Text = dentro.ToString();
			textF->Text = fuori.ToString();
		}

		private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e)
		{
			if(panel1->Width < panel1->Height)
			{
				rectP->Width = panel1->Width;
				rectP->Height = panel1->Width;
			}
			else if (panel1->Width > panel1->Height)
			{				
				rectP->Width = panel1->Height;
				rectP->Height = panel1->Height;
			}
			else if (panel1->Width == panel1->Height)
			{
				rectP->Width = panel1->Width;
				rectP->Height = panel1->Height;
			}

			scala = rectP->Width;
		}

			 
		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
		{
			MessageBox::Show( labellicense->Text, "?", MessageBoxButtons::OK); //finestra della licenza
		}
	};
}


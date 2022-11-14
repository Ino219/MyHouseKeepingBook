#pragma once

#using <mscorlib.dll>
#using <System.dll>
#using <System.Data.dll>
#using <System.Xml.dll>

using namespace System::Security::Permissions;
[assembly:SecurityPermissionAttribute(SecurityAction::RequestMinimum, SkipVerification=false)];
// 
// このソース コードは xsd によって自動生成されました。Version=4.6.1055.0 です。
// 
namespace MyHouseKeepingBook {
    using namespace System;
    ref class priceDataSet;
    
    
    /// <summary>
///Represents a strongly typed in-memory cache of data.
///</summary>
    [System::Serializable, 
    System::ComponentModel::DesignerCategoryAttribute(L"code"), 
    System::ComponentModel::ToolboxItem(true), 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedDataSetSchema"), 
    System::Xml::Serialization::XmlRootAttribute(L"priceDataSet"), 
    System::ComponentModel::Design::HelpKeywordAttribute(L"vs.data.DataSet")]
    public ref class priceDataSet : public ::System::Data::DataSet {
        public : ref class DataTable1DataTable;
        public : ref class DataTable1Row;
        public : ref class DataTable1RowChangeEvent;
        
        private: MyHouseKeepingBook::priceDataSet::DataTable1DataTable^  tableDataTable1;
        
        private: ::System::Data::SchemaSerializationMode _schemaSerializationMode;
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        delegate System::Void DataTable1RowChangeEventHandler(::System::Object^  sender, MyHouseKeepingBook::priceDataSet::DataTable1RowChangeEvent^  e);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        priceDataSet();
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        priceDataSet(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false), 
        System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
        property MyHouseKeepingBook::priceDataSet::DataTable1DataTable^  DataTable1 {
            MyHouseKeepingBook::priceDataSet::DataTable1DataTable^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::BrowsableAttribute(true), 
        System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Visible)]
        virtual property ::System::Data::SchemaSerializationMode SchemaSerializationMode {
            ::System::Data::SchemaSerializationMode get() override;
            System::Void set(::System::Data::SchemaSerializationMode value) override;
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Hidden)]
        property ::System::Data::DataTableCollection^  Tables {
            ::System::Data::DataTableCollection^  get() new;
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Hidden)]
        property ::System::Data::DataRelationCollection^  Relations {
            ::System::Data::DataRelationCollection^  get() new;
        }
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void InitializeDerivedDataSet() override;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataSet^  Clone() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Boolean ShouldSerializeTables() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Boolean ShouldSerializeRelations() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void ReadXmlSerializable(::System::Xml::XmlReader^  reader) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Xml::Schema::XmlSchema^  GetSchemaSerializable() override;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitVars();
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitVars(::System::Boolean initTable);
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitClass();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean ShouldSerializeDataTable1();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SchemaChanged(::System::Object^  sender, ::System::ComponentModel::CollectionChangeEventArgs^  e);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedDataSetSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        
        public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
        [System::Serializable, 
        System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
        ref class DataTable1DataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  column日付;
            
            private: ::System::Data::DataColumn^  column分類;
            
            private: ::System::Data::DataColumn^  column品名;
            
            private: ::System::Data::DataColumn^  column金額;
            
            private: ::System::Data::DataColumn^  column備考;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event MyHouseKeepingBook::priceDataSet::DataTable1RowChangeEventHandler^  DataTable1RowChanging;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event MyHouseKeepingBook::priceDataSet::DataTable1RowChangeEventHandler^  DataTable1RowChanged;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event MyHouseKeepingBook::priceDataSet::DataTable1RowChangeEventHandler^  DataTable1RowDeleting;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event MyHouseKeepingBook::priceDataSet::DataTable1RowChangeEventHandler^  DataTable1RowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DataTable1DataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DataTable1DataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DataTable1DataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  日付Column {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  分類Column {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  品名Column {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  金額Column {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  備考Column {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
            System::ComponentModel::Browsable(false)]
            property ::System::Int32 Count {
                ::System::Int32 get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property MyHouseKeepingBook::priceDataSet::DataTable1Row^  default [::System::Int32 ] {
                MyHouseKeepingBook::priceDataSet::DataTable1Row^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void AddDataTable1Row(MyHouseKeepingBook::priceDataSet::DataTable1Row^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            MyHouseKeepingBook::priceDataSet::DataTable1Row^  AddDataTable1Row(System::DateTime 日付, System::String^  分類, 
                        System::String^  品名, System::Int32 金額, System::String^  備考);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Collections::IEnumerator^  GetEnumerator();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  Clone() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  CreateInstance() override;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitVars();
            
            private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitClass();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            MyHouseKeepingBook::priceDataSet::DataTable1Row^  NewDataTable1Row();
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Type^  GetRowType() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void RemoveDataTable1Row(MyHouseKeepingBook::priceDataSet::DataTable1Row^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        ref class DataTable1Row : public ::System::Data::DataRow {
            
            private: MyHouseKeepingBook::priceDataSet::DataTable1DataTable^  tableDataTable1;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DataTable1Row(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::DateTime 日付 {
                System::DateTime get();
                System::Void set(System::DateTime value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  分類 {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  品名 {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 金額 {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  備考 {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean Is日付Null();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void Set日付Null();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean Is分類Null();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void Set分類Null();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean Is品名Null();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void Set品名Null();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean Is金額Null();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void Set金額Null();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean Is備考Null();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void Set備考Null();
        };
        
        public : /// <summary>
///Row event argument class
///</summary>
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ref class DataTable1RowChangeEvent : public ::System::EventArgs {
            
            private: MyHouseKeepingBook::priceDataSet::DataTable1Row^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            DataTable1RowChangeEvent(MyHouseKeepingBook::priceDataSet::DataTable1Row^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property MyHouseKeepingBook::priceDataSet::DataTable1Row^  Row {
                MyHouseKeepingBook::priceDataSet::DataTable1Row^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataRowAction Action {
                ::System::Data::DataRowAction get();
            }
        };
    };
}
namespace MyHouseKeepingBook {
    
    
    inline priceDataSet::priceDataSet() {
        this->BeginInit();
        this->InitClass();
        ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &MyHouseKeepingBook::priceDataSet::SchemaChanged);
        __super::Tables->CollectionChanged += schemaChangedHandler;
        __super::Relations->CollectionChanged += schemaChangedHandler;
        this->EndInit();
    }
    
    inline priceDataSet::priceDataSet(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataSet(info, context, false) {
        if (this->IsBinarySerialized(info, context) == true) {
            this->InitVars(false);
            ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler1 = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &MyHouseKeepingBook::priceDataSet::SchemaChanged);
            this->Tables->CollectionChanged += schemaChangedHandler1;
            this->Relations->CollectionChanged += schemaChangedHandler1;
            return;
        }
        ::System::String^  strSchema = (cli::safe_cast<::System::String^  >(info->GetValue(L"XmlSchema", ::System::String::typeid)));
        if (this->DetermineSchemaSerializationMode(info, context) == ::System::Data::SchemaSerializationMode::IncludeSchema) {
            ::System::Data::DataSet^  ds = (gcnew ::System::Data::DataSet());
            ds->ReadXmlSchema((gcnew ::System::Xml::XmlTextReader((gcnew ::System::IO::StringReader(strSchema)))));
            if (ds->Tables[L"DataTable1"] != nullptr) {
                __super::Tables->Add((gcnew MyHouseKeepingBook::priceDataSet::DataTable1DataTable(ds->Tables[L"DataTable1"])));
            }
            this->DataSetName = ds->DataSetName;
            this->Prefix = ds->Prefix;
            this->Namespace = ds->Namespace;
            this->Locale = ds->Locale;
            this->CaseSensitive = ds->CaseSensitive;
            this->EnforceConstraints = ds->EnforceConstraints;
            this->Merge(ds, false, ::System::Data::MissingSchemaAction::Add);
            this->InitVars();
        }
        else {
            this->ReadXmlSchema((gcnew ::System::Xml::XmlTextReader((gcnew ::System::IO::StringReader(strSchema)))));
        }
        this->GetSerializationData(info, context);
        ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &MyHouseKeepingBook::priceDataSet::SchemaChanged);
        __super::Tables->CollectionChanged += schemaChangedHandler;
        this->Relations->CollectionChanged += schemaChangedHandler;
    }
    
    inline MyHouseKeepingBook::priceDataSet::DataTable1DataTable^  priceDataSet::DataTable1::get() {
        return this->tableDataTable1;
    }
    
    inline ::System::Data::SchemaSerializationMode priceDataSet::SchemaSerializationMode::get() {
        return this->_schemaSerializationMode;
    }
    inline System::Void priceDataSet::SchemaSerializationMode::set(::System::Data::SchemaSerializationMode value) {
        this->_schemaSerializationMode = __identifier(value);
    }
    
    inline ::System::Data::DataTableCollection^  priceDataSet::Tables::get() {
        return __super::Tables;
    }
    
    inline ::System::Data::DataRelationCollection^  priceDataSet::Relations::get() {
        return __super::Relations;
    }
    
    inline ::System::Void priceDataSet::InitializeDerivedDataSet() {
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline ::System::Data::DataSet^  priceDataSet::Clone() {
        MyHouseKeepingBook::priceDataSet^  cln = (cli::safe_cast<MyHouseKeepingBook::priceDataSet^  >(__super::Clone()));
        cln->InitVars();
        cln->SchemaSerializationMode = this->SchemaSerializationMode;
        return cln;
    }
    
    inline ::System::Boolean priceDataSet::ShouldSerializeTables() {
        return false;
    }
    
    inline ::System::Boolean priceDataSet::ShouldSerializeRelations() {
        return false;
    }
    
    inline ::System::Void priceDataSet::ReadXmlSerializable(::System::Xml::XmlReader^  reader) {
        if (this->DetermineSchemaSerializationMode(reader) == ::System::Data::SchemaSerializationMode::IncludeSchema) {
            this->Reset();
            ::System::Data::DataSet^  ds = (gcnew ::System::Data::DataSet());
            ds->ReadXml(reader);
            if (ds->Tables[L"DataTable1"] != nullptr) {
                __super::Tables->Add((gcnew MyHouseKeepingBook::priceDataSet::DataTable1DataTable(ds->Tables[L"DataTable1"])));
            }
            this->DataSetName = ds->DataSetName;
            this->Prefix = ds->Prefix;
            this->Namespace = ds->Namespace;
            this->Locale = ds->Locale;
            this->CaseSensitive = ds->CaseSensitive;
            this->EnforceConstraints = ds->EnforceConstraints;
            this->Merge(ds, false, ::System::Data::MissingSchemaAction::Add);
            this->InitVars();
        }
        else {
            this->ReadXml(reader);
            this->InitVars();
        }
    }
    
    inline ::System::Xml::Schema::XmlSchema^  priceDataSet::GetSchemaSerializable() {
        ::System::IO::MemoryStream^  stream = (gcnew ::System::IO::MemoryStream());
        this->WriteXmlSchema((gcnew ::System::Xml::XmlTextWriter(stream, nullptr)));
        stream->Position = 0;
        return ::System::Xml::Schema::XmlSchema::Read((gcnew ::System::Xml::XmlTextReader(stream)), nullptr);
    }
    
    inline ::System::Void priceDataSet::InitVars() {
        this->InitVars(true);
    }
    
    inline ::System::Void priceDataSet::InitVars(::System::Boolean initTable) {
        this->tableDataTable1 = (cli::safe_cast<MyHouseKeepingBook::priceDataSet::DataTable1DataTable^  >(__super::Tables[L"DataTable1"]));
        if (initTable == true) {
            if (this->tableDataTable1 != nullptr) {
                this->tableDataTable1->InitVars();
            }
        }
    }
    
    inline ::System::Void priceDataSet::InitClass() {
        this->DataSetName = L"priceDataSet";
        this->Prefix = L"";
        this->Namespace = L"http://tempuri.org/priceDataSet.xsd";
        this->EnforceConstraints = true;
        this->SchemaSerializationMode = ::System::Data::SchemaSerializationMode::IncludeSchema;
        this->tableDataTable1 = (gcnew MyHouseKeepingBook::priceDataSet::DataTable1DataTable());
        __super::Tables->Add(this->tableDataTable1);
    }
    
    inline ::System::Boolean priceDataSet::ShouldSerializeDataTable1() {
        return false;
    }
    
    inline ::System::Void priceDataSet::SchemaChanged(::System::Object^  sender, ::System::ComponentModel::CollectionChangeEventArgs^  e) {
        if (e->Action == ::System::ComponentModel::CollectionChangeAction::Remove) {
            this->InitVars();
        }
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  priceDataSet::GetTypedDataSetSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
        MyHouseKeepingBook::priceDataSet^  ds = (gcnew MyHouseKeepingBook::priceDataSet());
        ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
        ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
        ::System::Xml::Schema::XmlSchemaAny^  any = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any->Namespace = ds->Namespace;
        sequence->Items->Add(any);
        type->Particle = sequence;
        ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
        if (xs->Contains(dsSchema->TargetNamespace)) {
            ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
            ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
            try {
                ::System::Xml::Schema::XmlSchema^  schema = nullptr;
                dsSchema->Write(s1);
                for (                ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();                 ) {
                    schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                    s2->SetLength(0);
                    schema->Write(s2);
                    if (s1->Length == s2->Length) {
                        s1->Position = 0;
                        s2->Position = 0;
                        for (                        ; ((s1->Position != s1->Length) 
                                    && (s1->ReadByte() == s2->ReadByte()));                         ) {
                            ;
                        }
                        if (s1->Position == s1->Length) {
                            return type;
                        }
                    }
                }
            }
            finally {
                if (s1 != nullptr) {
                    s1->Close();
                }
                if (s2 != nullptr) {
                    s2->Close();
                }
            }
        }
        xs->Add(dsSchema);
        return type;
    }
    
    
    inline priceDataSet::DataTable1DataTable::DataTable1DataTable() {
        this->TableName = L"DataTable1";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline priceDataSet::DataTable1DataTable::DataTable1DataTable(::System::Data::DataTable^  table) {
        this->TableName = table->TableName;
        if (table->CaseSensitive != table->DataSet->CaseSensitive) {
            this->CaseSensitive = table->CaseSensitive;
        }
        if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
            this->Locale = table->Locale;
        }
        if (table->Namespace != table->DataSet->Namespace) {
            this->Namespace = table->Namespace;
        }
        this->Prefix = table->Prefix;
        this->MinimumCapacity = table->MinimumCapacity;
    }
    
    inline priceDataSet::DataTable1DataTable::DataTable1DataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
                ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  priceDataSet::DataTable1DataTable::日付Column::get() {
        return this->column日付;
    }
    
    inline ::System::Data::DataColumn^  priceDataSet::DataTable1DataTable::分類Column::get() {
        return this->column分類;
    }
    
    inline ::System::Data::DataColumn^  priceDataSet::DataTable1DataTable::品名Column::get() {
        return this->column品名;
    }
    
    inline ::System::Data::DataColumn^  priceDataSet::DataTable1DataTable::金額Column::get() {
        return this->column金額;
    }
    
    inline ::System::Data::DataColumn^  priceDataSet::DataTable1DataTable::備考Column::get() {
        return this->column備考;
    }
    
    inline ::System::Int32 priceDataSet::DataTable1DataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline MyHouseKeepingBook::priceDataSet::DataTable1Row^  priceDataSet::DataTable1DataTable::default::get(::System::Int32 index) {
        return (cli::safe_cast<MyHouseKeepingBook::priceDataSet::DataTable1Row^  >(this->Rows[index]));
    }
    
    inline ::System::Void priceDataSet::DataTable1DataTable::AddDataTable1Row(MyHouseKeepingBook::priceDataSet::DataTable1Row^  row) {
        this->Rows->Add(row);
    }
    
    inline MyHouseKeepingBook::priceDataSet::DataTable1Row^  priceDataSet::DataTable1DataTable::AddDataTable1Row(System::DateTime 日付, 
                System::String^  分類, System::String^  品名, System::Int32 金額, System::String^  備考) {
        MyHouseKeepingBook::priceDataSet::DataTable1Row^  rowDataTable1Row = (cli::safe_cast<MyHouseKeepingBook::priceDataSet::DataTable1Row^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(5) {日付, 分類, 品名, 金額, 備考};
        rowDataTable1Row->ItemArray = columnValuesArray;
        this->Rows->Add(rowDataTable1Row);
        return rowDataTable1Row;
    }
    
    inline ::System::Collections::IEnumerator^  priceDataSet::DataTable1DataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  priceDataSet::DataTable1DataTable::Clone() {
        MyHouseKeepingBook::priceDataSet::DataTable1DataTable^  cln = (cli::safe_cast<MyHouseKeepingBook::priceDataSet::DataTable1DataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  priceDataSet::DataTable1DataTable::CreateInstance() {
        return (gcnew MyHouseKeepingBook::priceDataSet::DataTable1DataTable());
    }
    
    inline ::System::Void priceDataSet::DataTable1DataTable::InitVars() {
        this->column日付 = __super::Columns[L"日付"];
        this->column分類 = __super::Columns[L"分類"];
        this->column品名 = __super::Columns[L"品名"];
        this->column金額 = __super::Columns[L"金額"];
        this->column備考 = __super::Columns[L"備考"];
    }
    
    inline ::System::Void priceDataSet::DataTable1DataTable::InitClass() {
        this->column日付 = (gcnew ::System::Data::DataColumn(L"日付", ::System::DateTime::typeid, nullptr, ::System::Data::MappingType::Element));
        __super::Columns->Add(this->column日付);
        this->column分類 = (gcnew ::System::Data::DataColumn(L"分類", ::System::String::typeid, nullptr, ::System::Data::MappingType::Element));
        __super::Columns->Add(this->column分類);
        this->column品名 = (gcnew ::System::Data::DataColumn(L"品名", ::System::String::typeid, nullptr, ::System::Data::MappingType::Element));
        __super::Columns->Add(this->column品名);
        this->column金額 = (gcnew ::System::Data::DataColumn(L"金額", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Element));
        __super::Columns->Add(this->column金額);
        this->column備考 = (gcnew ::System::Data::DataColumn(L"備考", ::System::String::typeid, nullptr, ::System::Data::MappingType::Element));
        __super::Columns->Add(this->column備考);
    }
    
    inline MyHouseKeepingBook::priceDataSet::DataTable1Row^  priceDataSet::DataTable1DataTable::NewDataTable1Row() {
        return (cli::safe_cast<MyHouseKeepingBook::priceDataSet::DataTable1Row^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  priceDataSet::DataTable1DataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew MyHouseKeepingBook::priceDataSet::DataTable1Row(builder));
    }
    
    inline ::System::Type^  priceDataSet::DataTable1DataTable::GetRowType() {
        return MyHouseKeepingBook::priceDataSet::DataTable1Row::typeid;
    }
    
    inline ::System::Void priceDataSet::DataTable1DataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->DataTable1RowChanged(this, (gcnew MyHouseKeepingBook::priceDataSet::DataTable1RowChangeEvent((cli::safe_cast<MyHouseKeepingBook::priceDataSet::DataTable1Row^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void priceDataSet::DataTable1DataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->DataTable1RowChanging(this, (gcnew MyHouseKeepingBook::priceDataSet::DataTable1RowChangeEvent((cli::safe_cast<MyHouseKeepingBook::priceDataSet::DataTable1Row^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void priceDataSet::DataTable1DataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->DataTable1RowDeleted(this, (gcnew MyHouseKeepingBook::priceDataSet::DataTable1RowChangeEvent((cli::safe_cast<MyHouseKeepingBook::priceDataSet::DataTable1Row^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void priceDataSet::DataTable1DataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->DataTable1RowDeleting(this, (gcnew MyHouseKeepingBook::priceDataSet::DataTable1RowChangeEvent((cli::safe_cast<MyHouseKeepingBook::priceDataSet::DataTable1Row^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void priceDataSet::DataTable1DataTable::RemoveDataTable1Row(MyHouseKeepingBook::priceDataSet::DataTable1Row^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  priceDataSet::DataTable1DataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
        ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
        ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
        MyHouseKeepingBook::priceDataSet^  ds = (gcnew MyHouseKeepingBook::priceDataSet());
        ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
        any1->MinOccurs = ::System::Decimal(0);
        any1->MaxOccurs = ::System::Decimal::MaxValue;
        any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any1);
        ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
        any2->MinOccurs = ::System::Decimal(1);
        any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any2);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute1->Name = L"namespace";
        attribute1->FixedValue = ds->Namespace;
        type->Attributes->Add(attribute1);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute2->Name = L"tableTypeName";
        attribute2->FixedValue = L"DataTable1DataTable";
        type->Attributes->Add(attribute2);
        type->Particle = sequence;
        ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
        if (xs->Contains(dsSchema->TargetNamespace)) {
            ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
            ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
            try {
                ::System::Xml::Schema::XmlSchema^  schema = nullptr;
                dsSchema->Write(s1);
                for (                ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();                 ) {
                    schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                    s2->SetLength(0);
                    schema->Write(s2);
                    if (s1->Length == s2->Length) {
                        s1->Position = 0;
                        s2->Position = 0;
                        for (                        ; ((s1->Position != s1->Length) 
                                    && (s1->ReadByte() == s2->ReadByte()));                         ) {
                            ;
                        }
                        if (s1->Position == s1->Length) {
                            return type;
                        }
                    }
                }
            }
            finally {
                if (s1 != nullptr) {
                    s1->Close();
                }
                if (s2 != nullptr) {
                    s2->Close();
                }
            }
        }
        xs->Add(dsSchema);
        return type;
    }
    
    
    inline priceDataSet::DataTable1Row::DataTable1Row(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tableDataTable1 = (cli::safe_cast<MyHouseKeepingBook::priceDataSet::DataTable1DataTable^  >(this->Table));
    }
    
    inline System::DateTime priceDataSet::DataTable1Row::日付::get() {
        try {
            return (cli::safe_cast<::System::DateTime >(this[this->tableDataTable1->日付Column]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"テーブル \'DataTable1\' にある列 \'日付\' の値は DBNull です。", e));
        }
    }
    inline System::Void priceDataSet::DataTable1Row::日付::set(System::DateTime value) {
        this[this->tableDataTable1->日付Column] = value;
    }
    
    inline System::String^  priceDataSet::DataTable1Row::分類::get() {
        try {
            return (cli::safe_cast<::System::String^  >(this[this->tableDataTable1->分類Column]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"テーブル \'DataTable1\' にある列 \'分類\' の値は DBNull です。", e));
        }
    }
    inline System::Void priceDataSet::DataTable1Row::分類::set(System::String^  value) {
        this[this->tableDataTable1->分類Column] = value;
    }
    
    inline System::String^  priceDataSet::DataTable1Row::品名::get() {
        try {
            return (cli::safe_cast<::System::String^  >(this[this->tableDataTable1->品名Column]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"テーブル \'DataTable1\' にある列 \'品名\' の値は DBNull です。", e));
        }
    }
    inline System::Void priceDataSet::DataTable1Row::品名::set(System::String^  value) {
        this[this->tableDataTable1->品名Column] = value;
    }
    
    inline System::Int32 priceDataSet::DataTable1Row::金額::get() {
        try {
            return (cli::safe_cast<::System::Int32 >(this[this->tableDataTable1->金額Column]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"テーブル \'DataTable1\' にある列 \'金額\' の値は DBNull です。", e));
        }
    }
    inline System::Void priceDataSet::DataTable1Row::金額::set(System::Int32 value) {
        this[this->tableDataTable1->金額Column] = value;
    }
    
    inline System::String^  priceDataSet::DataTable1Row::備考::get() {
        try {
            return (cli::safe_cast<::System::String^  >(this[this->tableDataTable1->備考Column]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"テーブル \'DataTable1\' にある列 \'備考\' の値は DBNull です。", e));
        }
    }
    inline System::Void priceDataSet::DataTable1Row::備考::set(System::String^  value) {
        this[this->tableDataTable1->備考Column] = value;
    }
    
    inline ::System::Boolean priceDataSet::DataTable1Row::Is日付Null() {
        return this->IsNull(this->tableDataTable1->日付Column);
    }
    
    inline ::System::Void priceDataSet::DataTable1Row::Set日付Null() {
        this[this->tableDataTable1->日付Column] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean priceDataSet::DataTable1Row::Is分類Null() {
        return this->IsNull(this->tableDataTable1->分類Column);
    }
    
    inline ::System::Void priceDataSet::DataTable1Row::Set分類Null() {
        this[this->tableDataTable1->分類Column] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean priceDataSet::DataTable1Row::Is品名Null() {
        return this->IsNull(this->tableDataTable1->品名Column);
    }
    
    inline ::System::Void priceDataSet::DataTable1Row::Set品名Null() {
        this[this->tableDataTable1->品名Column] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean priceDataSet::DataTable1Row::Is金額Null() {
        return this->IsNull(this->tableDataTable1->金額Column);
    }
    
    inline ::System::Void priceDataSet::DataTable1Row::Set金額Null() {
        this[this->tableDataTable1->金額Column] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean priceDataSet::DataTable1Row::Is備考Null() {
        return this->IsNull(this->tableDataTable1->備考Column);
    }
    
    inline ::System::Void priceDataSet::DataTable1Row::Set備考Null() {
        this[this->tableDataTable1->備考Column] = ::System::Convert::DBNull;
    }
    
    
    inline priceDataSet::DataTable1RowChangeEvent::DataTable1RowChangeEvent(MyHouseKeepingBook::priceDataSet::DataTable1Row^  row, 
                ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline MyHouseKeepingBook::priceDataSet::DataTable1Row^  priceDataSet::DataTable1RowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction priceDataSet::DataTable1RowChangeEvent::Action::get() {
        return this->eventAction;
    }
}

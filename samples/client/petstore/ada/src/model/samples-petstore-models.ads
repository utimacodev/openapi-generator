--  OpenAPI Petstore
--  This is a sample server Petstore server. For this sample, you can use the api key `special_key` to test the authorization filters.
--
--  The version of the OpenAPI document: 1.0.0
--
--
--  NOTE: This package is auto generated by OpenAPI-Generator 7.6.0-SNAPSHOT.
--  https://openapi-generator.tech
--  Do not edit the class manually.

with Swagger.Streams;
with Ada.Containers.Vectors;
package Samples.Petstore.Models is
   pragma Style_Checks ("-bmrIu");



   type AnotherStatus_Type is (AVAILABLE,PENDING,UNAVAILABLE);

   function To_AnotherStatus_Type (Value : in String) return Samples.Petstore.Models.AnotherStatus_Type;

   function To_String (Value : in AnotherStatus_Type) return String;


   package AnotherStatus_Type_Vectors is
      new Ada.Containers.Vectors (Index_Type   => Positive,
                                  Element_Type => Samples.Petstore.Models.AnotherStatus_Type);

   procedure Serialize (Into  : in out Swagger.Streams.Output_Stream'Class;
                        Name  : in String;
                        Value : in Samples.Petstore.Models.AnotherStatus_Type);
   procedure Serialize (Into  : in out Swagger.Streams.Output_Stream'Class;
                        Name  : in String;
                        Value : in AnotherStatus_Type_Vectors.Vector);
   procedure Deserialize (From  : in Swagger.Value_Type;
                          Name  : in String;
                          Value : out Samples.Petstore.Models.AnotherStatus_Type);
   procedure Deserialize (From  : in Swagger.Value_Type;
                          Name  : in String;
                          Value : in out AnotherStatus_Type_Vectors.Vector);


   --  ------------------------------
   --  An uploaded response
   --  Describes the result of uploading an image resource
   --  ------------------------------
   type ApiResponse_Type is
     record
       Code : Swagger.Nullable_Integer;
       P_Type : Swagger.Nullable_UString;
       Message : Swagger.Nullable_UString;
     end record;


   package ApiResponse_Type_Vectors is
      new Ada.Containers.Vectors (Index_Type   => Positive,
                                  Element_Type => Samples.Petstore.Models.ApiResponse_Type);

   procedure Serialize (Into  : in out Swagger.Streams.Output_Stream'Class;
                        Name  : in String;
                        Value : in Samples.Petstore.Models.ApiResponse_Type);
   procedure Serialize (Into  : in out Swagger.Streams.Output_Stream'Class;
                        Name  : in String;
                        Value : in ApiResponse_Type_Vectors.Vector);
   procedure Deserialize (From  : in Swagger.Value_Type;
                          Name  : in String;
                          Value : out Samples.Petstore.Models.ApiResponse_Type);
   procedure Deserialize (From  : in Swagger.Value_Type;
                          Name  : in String;
                          Value : in out ApiResponse_Type_Vectors.Vector);


   --  ------------------------------
   --  Pet category
   --  A category for a pet
   --  ------------------------------
   type Category_Type is
     record
       Id : Swagger.Nullable_Long;
       Name : Swagger.Nullable_UString;
     end record;


   package Category_Type_Vectors is
      new Ada.Containers.Vectors (Index_Type   => Positive,
                                  Element_Type => Samples.Petstore.Models.Category_Type);

   procedure Serialize (Into  : in out Swagger.Streams.Output_Stream'Class;
                        Name  : in String;
                        Value : in Samples.Petstore.Models.Category_Type);
   procedure Serialize (Into  : in out Swagger.Streams.Output_Stream'Class;
                        Name  : in String;
                        Value : in Category_Type_Vectors.Vector);
   procedure Deserialize (From  : in Swagger.Value_Type;
                          Name  : in String;
                          Value : out Samples.Petstore.Models.Category_Type);
   procedure Deserialize (From  : in Swagger.Value_Type;
                          Name  : in String;
                          Value : in out Category_Type_Vectors.Vector);


   --  ------------------------------
   --  Pet Order
   --  An order for a pets from the pet store
   --  ------------------------------
   type Order_Type is
     record
       Id : Swagger.Nullable_Long;
       Pet_Id : Swagger.Nullable_Long;
       Quantity : Swagger.Nullable_Integer;
       Ship_Date : Swagger.Nullable_Date;
       Status : Swagger.Nullable_UString;
       Complete : Swagger.Nullable_Boolean;
     end record;


   package Order_Type_Vectors is
      new Ada.Containers.Vectors (Index_Type   => Positive,
                                  Element_Type => Samples.Petstore.Models.Order_Type);

   procedure Serialize (Into  : in out Swagger.Streams.Output_Stream'Class;
                        Name  : in String;
                        Value : in Samples.Petstore.Models.Order_Type);
   procedure Serialize (Into  : in out Swagger.Streams.Output_Stream'Class;
                        Name  : in String;
                        Value : in Order_Type_Vectors.Vector);
   procedure Deserialize (From  : in Swagger.Value_Type;
                          Name  : in String;
                          Value : out Samples.Petstore.Models.Order_Type);
   procedure Deserialize (From  : in Swagger.Value_Type;
                          Name  : in String;
                          Value : in out Order_Type_Vectors.Vector);



   type PropertyNameMapping_Type is
     record
       P_HTTPDebugOperation : Swagger.Nullable_UString;
       P_UnderscoreType : Swagger.Nullable_UString;
       P_Type : Swagger.Nullable_UString;
       P_TypeWithUnderscore : Swagger.Nullable_UString;
     end record;


   package PropertyNameMapping_Type_Vectors is
      new Ada.Containers.Vectors (Index_Type   => Positive,
                                  Element_Type => Samples.Petstore.Models.PropertyNameMapping_Type);

   procedure Serialize (Into  : in out Swagger.Streams.Output_Stream'Class;
                        Name  : in String;
                        Value : in Samples.Petstore.Models.PropertyNameMapping_Type);
   procedure Serialize (Into  : in out Swagger.Streams.Output_Stream'Class;
                        Name  : in String;
                        Value : in PropertyNameMapping_Type_Vectors.Vector);
   procedure Deserialize (From  : in Swagger.Value_Type;
                          Name  : in String;
                          Value : out Samples.Petstore.Models.PropertyNameMapping_Type);
   procedure Deserialize (From  : in Swagger.Value_Type;
                          Name  : in String;
                          Value : in out PropertyNameMapping_Type_Vectors.Vector);


   --  ------------------------------
   --  Pet Tag
   --  A tag for a pet
   --  ------------------------------
   type Tag_Type is
     record
       Id : Swagger.Nullable_Long;
       Name : Swagger.Nullable_UString;
     end record;


   package Tag_Type_Vectors is
      new Ada.Containers.Vectors (Index_Type   => Positive,
                                  Element_Type => Samples.Petstore.Models.Tag_Type);

   procedure Serialize (Into  : in out Swagger.Streams.Output_Stream'Class;
                        Name  : in String;
                        Value : in Samples.Petstore.Models.Tag_Type);
   procedure Serialize (Into  : in out Swagger.Streams.Output_Stream'Class;
                        Name  : in String;
                        Value : in Tag_Type_Vectors.Vector);
   procedure Deserialize (From  : in Swagger.Value_Type;
                          Name  : in String;
                          Value : out Samples.Petstore.Models.Tag_Type);
   procedure Deserialize (From  : in Swagger.Value_Type;
                          Name  : in String;
                          Value : in out Tag_Type_Vectors.Vector);


   --  ------------------------------
   --  a User
   --  A User who is purchasing from the pet store
   --  ------------------------------
   type User_Type is
     record
       Id : Swagger.Nullable_Long;
       Username : Swagger.Nullable_UString;
       First_Name : Swagger.Nullable_UString;
       Last_Name : Swagger.Nullable_UString;
       Email : Swagger.Nullable_UString;
       Password : Swagger.Nullable_UString;
       Phone : Swagger.Nullable_UString;
       User_Status : Swagger.Nullable_Integer;
     end record;


   package User_Type_Vectors is
      new Ada.Containers.Vectors (Index_Type   => Positive,
                                  Element_Type => Samples.Petstore.Models.User_Type);

   procedure Serialize (Into  : in out Swagger.Streams.Output_Stream'Class;
                        Name  : in String;
                        Value : in Samples.Petstore.Models.User_Type);
   procedure Serialize (Into  : in out Swagger.Streams.Output_Stream'Class;
                        Name  : in String;
                        Value : in User_Type_Vectors.Vector);
   procedure Deserialize (From  : in Swagger.Value_Type;
                          Name  : in String;
                          Value : out Samples.Petstore.Models.User_Type);
   procedure Deserialize (From  : in Swagger.Value_Type;
                          Name  : in String;
                          Value : in out User_Type_Vectors.Vector);


   --  ------------------------------
   --  a Pet
   --  A pet for sale in the pet store
   --  ------------------------------
   type Pet_Type is
     record
       Id : Swagger.Nullable_Long;
       Category : Samples.Petstore.Models.Category_Type;
       Name : Swagger.UString;
       Photo_Urls : Swagger.UString_Vectors.Vector;
       Tags : Samples.Petstore.Models.Tag_Type_Vectors.Vector;
       Status : Swagger.Nullable_UString;
     end record;


   package Pet_Type_Vectors is
      new Ada.Containers.Vectors (Index_Type   => Positive,
                                  Element_Type => Samples.Petstore.Models.Pet_Type);

   procedure Serialize (Into  : in out Swagger.Streams.Output_Stream'Class;
                        Name  : in String;
                        Value : in Samples.Petstore.Models.Pet_Type);
   procedure Serialize (Into  : in out Swagger.Streams.Output_Stream'Class;
                        Name  : in String;
                        Value : in Pet_Type_Vectors.Vector);
   procedure Deserialize (From  : in Swagger.Value_Type;
                          Name  : in String;
                          Value : out Samples.Petstore.Models.Pet_Type);
   procedure Deserialize (From  : in Swagger.Value_Type;
                          Name  : in String;
                          Value : in out Pet_Type_Vectors.Vector);


end Samples.Petstore.Models;

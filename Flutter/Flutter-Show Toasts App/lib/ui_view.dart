import 'package:flutter/material.dart';
import 'package:flutter_statusbarcolor/flutter_statusbarcolor.dart';
import 'package:fluttertoast/fluttertoast.dart';

view() {
  toast() {
    Fluttertoast.showToast(
        msg: "This is Bottom Short Toast",
        toastLength: Toast.LENGTH_SHORT,
        gravity: ToastGravity.BOTTOM,
        backgroundColor: Colors.red.shade900,
        textColor: Colors.white,
        fontSize: 16.0);
  }

  ;
  FlutterStatusbarcolor.setStatusBarColor(Colors.red.shade900);
  var EmailButton = Icon(Icons.email);
  var Email = IconButton(
    icon: EmailButton,
    onPressed: toast,
    focusColor: Colors.white,
  );

  var src =
      'https://raw.githubusercontent.com/Dakshjain1/photo/master/DJ.JPG?token=AM6T7IRSHM6PUJYJXS6F2NS7DCLKA';
  var column = Column(
    children: <Widget>[
      Text('Hiii',
          style: TextStyle(
            color: Colors.white,
            fontSize: 30,
            fontWeight: FontWeight.bold,
          )),
      Text(
        'Daksh Here',
        style: TextStyle(
          color: Colors.white,
          fontSize: 30,
          fontWeight: FontWeight.bold,
        ),
      ),
      Image(
        image: NetworkImage(src),
        fit: BoxFit.cover,
      ),
    ],
  );
  var border = Border.all(
    color: Colors.red.shade900,
    width: 10,
  );
  var decorate = BoxDecoration(
    color: Colors.black,
    border: border,
    borderRadius: BorderRadius.circular(200),
  );
  var contain = Container(
    width: 360,
    height: 430,
    decoration: decorate,
    child: column,
    alignment: Alignment.bottomCenter,
  );

  var bar = AppBar(
    title: Text('Toasts'),
    backgroundColor: Colors.black,
    actions: <Widget>[
      Email,
    ],
  );
  var ui = Scaffold(
    appBar: bar,
    body: Center(child: contain),
  );
  var design = MaterialApp(
    home: ui,
    debugShowCheckedModeBanner: false,
  );
  return design;
}

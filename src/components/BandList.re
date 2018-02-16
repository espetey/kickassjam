let component = ReasonReact.statelessComponent("BandListComponent");

let handleClick = (_event, _self) => Js.log("handle band list click");

let make = (~bandList, _children) => {
  ...component,
  render: (self) =>
    <div onClick=(self.handle(handleClick))> (ReasonReact.stringToElement(bandList))</div>
}
